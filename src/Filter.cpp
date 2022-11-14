#include "Filter.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

Filter::Filter(){
    
}

Filter::Filter(vector<Movies> listOfMovies){

}

vector<Movies> Filter::sortByLength(){

}

vector<Movies> Filter::sortByGenre(string movieGenre)(){

}

vector<Movies> Filter::sortByYear(){
    vector <int> newMoviesList = {1, 2, 3}; //dummy template
    sort(newMoveisList.begin(),newMoviesList.end(), greater<int>());
    
}

vector<Movies> Filter::findSimilarMovies(string movieTitle){

}
