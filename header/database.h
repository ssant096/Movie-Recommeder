#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <string>
#include <vector>
#include "../header/movieRecord.h"
#include "../header/movies.h"


using namespace std;


class Database{
    private:
        string movieTitle;
        string movieGenre;
        int movieYear;
        int movieLength;
        double movieRating;
        vector <Movies> databaseList;

    public:
        void displayMovies(vector <MovieRecord>& movies);
        void initDatabase(vector <MovieRecord>& movies);
        void loadMovies();
        void saveMovieToList();
        void deleteMovieFromList(string movieName);
};


#endif