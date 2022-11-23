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
    sort(listToModify.begin(), listToModify.end(), [](Movies& lhs, Movies& rhs){
        return lhs.Genre() > rhs.Genre();
    });
    
    return listToModify; 
}

vector<Movies> Filter::sortByGenre(string movieGenre){
    vector <MoviesList> genreMoviesList;

    for(int i = 0; i < listToModify.size(); i++){
        if(listToModify.at(i).Genre == movieGenre){
            genreMovieList.push_back(listToModify.at(i));
        }
    }

    listToModify = genreMoviesList;

    return listToModify; 
}

vector<Movies> Filter::sortByYear(){
    sort(listToModify.begin(), listToModify.end(), [](Movies& lhs, Movies& rhs){
        return lhs.getReleaseDate() > rhs.getReleaseDate();
    });
    
    return listToModify;
}

vector<Movies> Filter::sortByRating(){
    sort(listToModify.begin(), listToModify.end(), [](Movies& lhs, Movies& rhs){
        return lhs.getRating() > rhs.getRating();
    });
    return listToModify;
}

vector<Movies> Filter::findSimilarMovies(string movieTitle){
    string genre = "Action";
    for(int i = 0; i < listToModify.size(); i++){
        if(listToModify.at(i).getTitle() == movieTitle){
            genre = listToModify.at(i).Genre();
        }
    }

    return sortByGenre(genre); 
}
