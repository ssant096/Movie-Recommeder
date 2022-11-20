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
        Database();
        void displayMovies(vector <MovieRecord>& movies);
        void initDatabase(vector <MovieRecord>& movies);
        void loadMovies();
        void addMovieToList(string title, string genre, int year, int length, double rating);
        void deleteLastMovieFromList();
        vector<Movies> returnDatabaseList();
};


#endif