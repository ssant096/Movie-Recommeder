#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector> 

#include "../header/database.h"
#include "../header/movieRecord.h"

using namespace std;


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

        MovieRecord movie(inputTitle, inputGenre, inputYear, inputLength, inputRating);
        movies.push_back(movie);
        line = "";
    }
    inputFile.close();
}  

void Database::loadMovies(){
    vector <MovieRecord> moviesList;
    initDatabase(moviesList);
    displayMovies(moviesList);
}