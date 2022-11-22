#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "../header/filter.h"

using namespace std;

Filter::Filter(){
    
}

Filter::Filter(vector<Movies> listOfMovies){
    listToModify = listOfMovies;
}

vector<Movies> Filter::sortByLength(){

    return listToModify; 
}

vector<Movies> Filter::sortByGenre(string movieGenre){

    return listToModify; 
}

vector<Movies> Filter::sortByYear(){
    sort(listToModify.begin(), listToModify.end(), [](Movies& lhs, Movies& rhs){
        return lhs.getReleaseDate() > rhs.getReleaseDate();
    });

    return listToModify; 
}

vector<Movies> Filter::sortByRating(){

    return listToModify;    
}

vector<Movies> Filter::findSimilarMovies(string movieTitle){

    return listToModify; 
}

