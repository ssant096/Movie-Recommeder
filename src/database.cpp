#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector> 

#include "../header/database.h"
#include "../header/movieRecord.h"
#include "../header/movies.h"

using namespace std;

Database::Database(){
    loadMovies();
}

void Database::displayMovies(vector <MovieRecord>& movies){
    for (auto movie : movies) {
        movie.display();
    }
}
void Database::initDatabase(vector <MovieRecord>& movies){
    ifstream inputFile;
    inputFile.open("databaseInfo/IMDB-Top-1000-Movies(2018).csv");

    if(!inputFile.is_open()){
        cerr << "Unable to open the file " << endl;
    }

    string line = "";

    string inputTitle, inputGenre, inputYear, inputLength, inputRating, garbageString;

     while (getline(inputFile, line)){
        stringstream inputString(line);
        getline(inputString, inputTitle, ',');
        getline(inputString, garbageString, '"');
        getline(inputString, inputGenre, '"');
        getline(inputString, garbageString, ',');
        getline(inputString, inputYear, ',');
        getline(inputString, inputLength, ',');
        getline(inputString, inputRating);

        movieTitle = inputTitle;

        bool stop = false;
        for(int i = 0; i < inputGenre.size(); i++){
            if(stop == false && inputGenre.at(i) == ','){
                inputGenre = inputGenre.substr(0,i);
                stop = true;
            }
        }

        movieGenre = inputGenre;
        movieYear = atoi(inputYear.c_str());
        movieLength = atoi(inputLength.c_str());
        movieRating = atof(inputRating.c_str());

        Movies movie(movieTitle, movieGenre, movieYear, movieLength, movieRating);
        databaseList.push_back(movie);
        line = "";
    }
    inputFile.close();
}  

void Database::loadMovies(){
    vector <MovieRecord> moviesList;
    initDatabase(moviesList);
}

vector<Movies> Database::returnDatabaseList(){
    return databaseList;
}

void Database::addMovieToList(string title, string genre, int year, int length, double rating){
    Movies newMovie(title, genre, year, length, rating);
    databaseList.push_back(newMovie);
}

void Database::deleteLastMovieFromList(){
    databaseList.pop_back();
}