#ifndef __FILTER_H__
#define __FILTER_H__
#include <string>
#include <vector>
#include "../header/movies.h"

class Filter{
private:
    vector<Movies> listToModify;
public:
    Filter();//default constructor which will initialize an empty list
    Filter(vector<Movies> listOfMovies);//constructor, copies entered list of movies to a list which will be modified
    vector<Movies> sortByLength();//reads through list of movies and sorts by views (most to fewest) and returns new sorted list
    vector<Movies> sortByGenre(string movieGenre);//reads through list and sorts Movies based on year (most recent to oldest)
    vector<Movies> sortByYear();//sorts list based on year (most recent to oldest) and returns new list
    vector<Movies> sortByRating();
    vector<Movies> findSimilarMovies(string movieTitle);//reads through list and finds similar movies and returns new list
};

#endif