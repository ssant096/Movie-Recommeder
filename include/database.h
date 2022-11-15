#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <string>
#include "../include/movieRecord.h"

using namespace std;


class Database{
    private:
        string movieTitle;
        string movieGenre;
        string movieYear;
        string movieLength;
        string movieRating;

    public:
        void displayMovies(vector <MovieRecord>& movies);
        void initDatabase(vector <MovieRecord>& movies);
};


#endif