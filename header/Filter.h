#ifndef __FILTER_H__
#define __FILTER_H__

#include <string>
//#include "../src/Movies.cpp"

class Filter{
private:
    Movies** listToModify;
public:
    Movies** sortByViews();//reads through list of movies and sorts by views (most to fewest) and returns new sorted list
    Moives** sortByGenre(string movieGenre);//reads through list and sorts Movies based on year (most recent to oldest)
    Movies** sortByYear();//sorts list based on year (most recent to oldest) and returns new list
    void findSimilarMovies(string movieTitle);//reads through list and finds similar movies and returns new list
    Filter(Movies** listOfMovies);//constructor, copies entered list of movies to a list which will be modified
    Filter();//default constructor which will initialize an empty list
};

#endif