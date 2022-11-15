#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector> 

#include "../include/database.h"
#include "../include/movieRecord.h"

using namespace std;

void Database::displayMovies(vector <MovieRecord>& movies){
    for (auto movie : movies) {
        movie.display();
    }
}
void Database::initDatabase(vector <MovieRecord>& movies){
    ifstream inputFile;
    inputFile.open("../databaseInfo/IMDB-Top-1000-Movies(2018).csv");
    string line = "";

    while (getline(inputFile, line)){
        stringstream inputString(line);\
        getline(inputString, movieTitle, '"');
        getline(inputString, movieGenre, '"');
        getline(inputString, movieYear, ',');
        getline(inputString, movieLength, ',');
        getline(inputString, movieRating, ' ');

        MovieRecord movie(movieTitle, movieGenre, movieYear, movieLength, movieRating);
        movies.push_back(movie);
        line = "";
    }
}  
