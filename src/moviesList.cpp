#include "../header/moviesList.h"
#include "../header/database.h"
#include "../header/movies.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

MoviesList::MoviesList(){
    movieDatabase.loadMovies();
    listOfMovies = movieDatabase.returnDatabaseList();
}

MoviesList::MoviesList(string filterType)
{

}

MoviesList::MoviesList(string filterType, string movieTitle)
{
    
}

void MoviesList::printListOfMovies()
{
    for(unsigned i=0; i<listOfMovies.size();i++)
    {
        cout<<listOfMovies[i].getTitle()<<", "<<listOfMovies[i].Genre()<<", "<<listOfMovies[i].getReleaseDate()<< ", "<<listOfMovies[i].getLength() <<", "<< listOfMovies[i].getRating() << endl;
    }
}

vector<Movies> MoviesList::returnMoviesList(){
    return listOfMovies;
}