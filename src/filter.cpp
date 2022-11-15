#include "filter.h"
#include "moviesList.h"
#include "movies.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<MoviesList> Filter::sortByGenre(string movieGenre, vector<MoviesList> movieList )(){
    vector <MoviesList> genreMoviesList = {}
    int i = 0;
    while(movieList.at(i) != NULL){
        if(movieList.at(i).Genre == movieGenre){
            genreMoviesList.push_back(movieList.at(i));
        }
        i++;
    }
    return genreMoviesList;
}