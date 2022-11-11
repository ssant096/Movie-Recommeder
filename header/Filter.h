#ifndef __FILTER_H__
#define __FILTER_H__

#include <string>

class Filter{
public:
    void sortByViews();
    void sortByGenre(string movieGenre);
    void sortByYear();//reads through MoviesList and sorts Movies based on year (most recent to oldest)
    void findSimilarMovies();
};

#endif