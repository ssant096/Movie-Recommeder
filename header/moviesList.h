#ifndef __MOVIESLIST_H__
#define __MOVIESLIST_H__

//#include "../header/filter.h"
#include "../header/database.h"
#include "../header/movies.h"

class MoviesList{
    private:
        vector <Movies> listOfMovies;
        //Filter filterList; 
        Database movieDatabase; 

public:
        MoviesList();//creates a list containing all movies from database
        void printListOfMovies();//prints a list of all movies in current list
        MoviesList(string filterType);//creates list of movies based on given filter
        MoviesList(string filterType, string movieTitle);
        vector<Movies> returnMoviesList();
};

#endif