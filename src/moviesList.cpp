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

MoviesList::MoviesList(string filterType){
    if(filterType == "rating"){

    }
    else if(filterType = "length"){

    }
    else if(filterType = "year"){

    }

}

MoviesList::MoviesList(int genreNumber){
    if (genreNumber == 1){

    }
    else if (genreNumber == 2){

    }
    else if (genreNumber == 3){
        
    }
    else if (genreNumber == 4){
        
    }
    else if (genreNumber == 5){
        
    }
    else if (genreNumber == 6){
        
    }
    else if (genreNumber == 7){
        
    }
    else if (genreNumber == 8){
        
    }
    else if (genreNumber == 9){
        
    }
    else if (genreNumber == 10){
        
    }
    else if (genreNumber == 11){
        
    }
    else if (genreNumber == 12){
        
    }
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