#ifndef MOVIE_H
#define MOVIE_H

#include <string>

// Definimos la estructura Movie para almacenar los datos de cada registro
struct Movie {
  std::string imdb_id;
  std::string title;
  std::string plot_synopsis;
  std::string tags;
  std::string split;
  std::string synopsis_source;

  // Sobrecargar el operador < para que la estructura pueda ser utilizada en
  // contenedores ordenados
  bool operator<(const Movie &other) const { return imdb_id < other.imdb_id; }

  // Sobrecargar el operador == para permitir comparaciones
  bool operator==(const Movie &other) const { return imdb_id == other.imdb_id; }
};

#endif // MOVIE_H
