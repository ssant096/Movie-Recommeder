#ifndef __DRIVER_H__
#define __DRIVER_H__

#include <string>
#include <vector>
//#include "../header/MoviesList.h"
//#include "../header/Database.h"

class Driver{
private:
    Database movieDatabase;
    MoviesList listToOutput;
public:
    Driver();//default constructor
    void displayMainMenu();//displays starting menu to user;
    void displayMovieTitleInputMenu();
    void displayGenreInputMenu();
    void displayAddMovieMenu();
    void sortMenu();//displays sorting options
};

#endif