#include <iostream>
#include <cstring>
#include <vector>
#include "../header/moviesList.h"
#include "../header/database.h"
#include "../header/movies.h"

using namespace std;

MoviesList::MoviesList(){
    movieDatabase.loadMovies();
    listOfMovies = movieDatabase.returnDatabaseList();
}

MoviesList::MoviesList(vector<Movies> listToFilter, string filterType){
    listOfMovies = listToFilter;

    if(filterType == "rating"){
        filterList = Filter(listOfMovies);
        listOfMovies = filterList.sortByRating();
    }
    else if(filterType == "length"){
        filterList = Filter(listOfMovies);
        listOfMovies = filterList.sortByLength();
    }
    else if(filterType == "year"){
        filterList = Filter(listOfMovies);
        listOfMovies = filterList.sortByYear();
    }
}

void MoviesList::filterByGenre(string genre){
    filterList = Filter(listOfMovies);
    listOfMovies = filterList.sortByGenre(genre);
}

void MoviesList::filterByName(string movieTitle){
    filterList = Filter(listOfMovies);
    listOfMovies = filterList.findSimilarMovies(movieTitle);
}

void MoviesList::printListOfMovies(){
    for(unsigned i=0; i<listOfMovies.size();i++)
    {
        cout<<listOfMovies[i].getTitle()<<", "<<listOfMovies[i].Genre()<<", "<<listOfMovies[i].getReleaseDate()<< ", "<<listOfMovies[i].getLength() <<", "<< listOfMovies[i].getRating() << endl;
    }
}

vector<Movies> MoviesList::returnMoviesList(){
    return listOfMovies;
}
