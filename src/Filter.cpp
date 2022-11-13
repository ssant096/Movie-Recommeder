#include "Filter.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

Filter::Filter(){
    
}

Filter::Filter(Movies** listOfMovies){

}

Movies** Filter::sortByViews(){

}

Movies** Filter::sortByGenre(string movieGenre)(){

}

Movies** Filter::sortByYear(){
    vector <int> newMoviesList = {1, 2, 3}; //dummy template
    sort(newMoveisList.begin(),newMoviesList.end(), greater<int>());
    
}

Movies** Filter::findSimilarMovies(string movieTitle){

}
