#ifndef COMMAND_H
#define COMMAND_H

#include "../utilities/movie.h"
#include "user_interface.h"

class Command {
public:
  virtual ~Command() = default;
  virtual void execute() = 0;
};

class LikeCommand : public Command {
public:
  LikeCommand(UserInterface &ui, const Movie &movie) : ui(ui), movie(movie) {}
  void execute() override { ui.selectMovie(movie); }

private:
  UserInterface &ui;
  Movie movie;
};

class LaterCommand : public Command {
public:
  LaterCommand(UserInterface &ui, const Movie &movie) : ui(ui), movie(movie) {}
  void execute() override { ui.selectMovie(movie); }

private:
  UserInterface &ui;
  Movie movie;
};

#endif // COMMAND_H
