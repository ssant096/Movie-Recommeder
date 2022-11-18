#ifndef __MOVIESLIST_H__
#define __MOVIESLIST_H__

//#include "../header/filter.h"
#include "../header/database.h"

class MoviesList{
    private:
        vector <Movies> listOfMovies;//change: made into vector
        //Filter filterList; 
        Database movieDatabase; 

public:
        MoviesList();
        void printListOfMovies();//prints a list of all movies
        MoviesList(string filterType);//creates list of movies based on given filter
        //MoviesList(Database* fullDatabase);//creates a list containing all movies
};

#endif