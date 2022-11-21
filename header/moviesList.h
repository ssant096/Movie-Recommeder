#ifndef __MOVIESLIST_H__
#define __MOVIESLIST_H__
#include <vector>
#include <string>
#include "../header/filter.h"
#include "../header/database.h"
#include "../header/movies.h"


class MoviesList{
    private:
        vector <Movies> listOfMovies;
        Filter filterList; 
        Database movieDatabase; 

public:
        MoviesList();//creates a list containing all movies from database (listOfMovies)
        void printListOfMovies();//prints a list of all movies in current list
        MoviesList(vector<Movies> listToFilter, string filterType);//sorts listOfMovies based on given filter
        void filterByGenre(string genre);//modifies listOfMovies to only have movies of a specified genre
        void filterByName(string movieTitle);//modifies listOfMovies to only have movies of the same genre as the entered movie title
        vector<Movies> returnMoviesList();//returns listOfMovies
};

#endif
