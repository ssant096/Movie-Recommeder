#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <string>
#include <vector>
#include "../header/movies.h"



using namespace std;


class Database{
    private:
        string movieTitle;
        string movieGenre;
        int movieYear;
        int movieLength;
        double movieRating;
        vector<Movies> databaseList;

    public:
        Database();
        void initDatabase();
        void addMovieToList(string title, string genre, int year, int length, double rating);
        void deleteLastMovieFromList();
        vector<Movies> returnDatabaseList();
};


#endif