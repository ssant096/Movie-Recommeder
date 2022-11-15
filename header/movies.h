#ifndef __MOVIES_H__
#define __MOVIES_H__

class Movies{
    private:

        string title; //title of the movie
        string genre; //genre of the movie
        double rating; // rating of the movie out of 10
        int releaseDate; //the year the movie was released
        int views; // amount of viewership

public:
        Movies(string title, int rating, string genre, int releaseDate, int length); 
        double getRating();
        string getTitle();
        string Genre();
        int getReleaseDate();
        int getLength();

}

