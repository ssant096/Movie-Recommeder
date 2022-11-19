#include "filter.h"
#include "movies.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

Filter::Filter(){
    
}

Filter::Filter(vector<Movies> listOfMovies){
    listToModify = listOfMovies;
}

vector<Movies> Filter::sortByLength(){

}

vector<Movies> Filter::sortByGenre(string movieGenre)(){

}

vector<Movies> Filter::sortByYear(){
    sort(listToModify.begin(),newMoviesList.end(), greater<int>());
    
}

vector<Movies> Filter::findSimilarMovies(string movieTitle){

}