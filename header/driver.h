#ifndef __DRIVER_H__
#define __DRIVER_H__

#include <string>
#include <vector>
#include "../header/moviesList.h"
#include "../header/database.h"

class Driver{
private:
    Database movieDatabase;
    MoviesList listToOutput;
public:
    Driver();
    void displayMainMenu();//displays starting menu to user;
    void displayMovieTitleInputMenu();
    void displayGenreInputMenu();
    void displayAddMovieMenu();
    void sortMenu();//displays sorting options
};

#endif