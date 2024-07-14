#ifndef SEARCH_STRATEGY_H
#define SEARCH_STRATEGY_H

#include "../utilities/movie.h"
#include "movie_database.h"
#include <string>
#include <vector>

class SearchStrategy {
public:
  virtual ~SearchStrategy() = default;
  virtual std::vector<Movie> search(const std::string &query) = 0;
};

class TitleSearchStrategy : public SearchStrategy {
public:
  std::vector<Movie> search(const std::string &query) override {
    return MovieDatabase::getInstance().searchByTitle(query);
  }
};

class TagSearchStrategy : public SearchStrategy {
public:
  std::vector<Movie> search(const std::string &query) override {
    return MovieDatabase::getInstance().searchByTag(query);
  }
};

#endif // SEARCH_STRATEGY_H
