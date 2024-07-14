#ifndef MOVIE_DATABASE_H
#define MOVIE_DATABASE_H

#include "../utilities/movie.h"
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class MovieDatabase {
public:
  static MovieDatabase &getInstance() {
    static MovieDatabase instance;
    return instance;
  }

  void loadMovies(const std::vector<Movie> &movies) {
    for (const auto &movie : movies) {
      moviesById[movie.imdb_id] = movie;
      moviesByTitle[movie.title].push_back(movie);
      auto tags = splitTags(movie.tags);
      for (const auto &tag : tags) {
        moviesByTag[tag].push_back(movie);
      }
    }
  }

  std::vector<Movie> searchByTitle(const std::string &title) const {
    if (moviesByTitle.find(title) != moviesByTitle.end()) {
      return moviesByTitle.at(title);
    }
    return {};
  }

  std::vector<Movie> searchByTag(const std::string &tag) const {
    if (moviesByTag.find(tag) != moviesByTag.end()) {
      return moviesByTag.at(tag);
    }
    return {};
  }

  std::vector<Movie>
  getSimilarMovies(const std::unordered_set<std::string> &likedTags) const {
    std::vector<Movie> similarMovies;
    for (const auto &tag : likedTags) {
      auto moviesWithTag = searchByTag(tag);
      similarMovies.insert(similarMovies.end(), moviesWithTag.begin(),
                           moviesWithTag.end());
    }
    std::sort(similarMovies.begin(), similarMovies.end(),
              [](const Movie &a, const Movie &b) { return a.title < b.title; });
    auto last = std::unique(similarMovies.begin(), similarMovies.end());
    similarMovies.erase(last, similarMovies.end());

    // Limitar a las top 10 películas
    if (similarMovies.size() > 10) {
      similarMovies.resize(10);
    }

    return similarMovies;
  }

  Movie getMovieById(const std::string &id) const { return moviesById.at(id); }

private:
  MovieDatabase() = default;
  MovieDatabase(const MovieDatabase &) = delete;
  MovieDatabase &operator=(const MovieDatabase &) = delete;

  std::unordered_map<std::string, Movie> moviesById;
  std::unordered_map<std::string, std::vector<Movie>> moviesByTitle;
  std::unordered_map<std::string, std::vector<Movie>> moviesByTag;

  std::vector<std::string> splitTags(const std::string &tags) const {
    std::vector<std::string> result;
    size_t start = 0, end = 0;
    while ((end = tags.find(", ", start)) != std::string::npos) {
      result.push_back(tags.substr(start, end - start));
      start = end + 2;
    }
    result.push_back(tags.substr(start));
    return result;
  }
};

#endif // MOVIE_DATABASE_H
