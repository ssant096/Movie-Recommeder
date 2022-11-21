#ifndef MOVIERECORD_H
#define MOVIERECORD_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct MovieRecord {
public:
    MovieRecord(
        string title, 
        string genre, 
        string year, 
        string length,
        string rating
    ) {

        
        movieTitle = title;
        bool stop = false;
        //removes all but first genre
        for(int i = 0; i < genre.size(); ++i){
            if(stop == false && genre.at(i) == ','){
                genre = genre.substr(0, i);
                stop = true;
            }
        }
        movieGenre = genre;
        movieYear = year;
        movieLength = length;
        movieRating = rating;
        
    }

    void display() {
    cout << "   Title: " << movieTitle << endl;
    cout << "   Genre: " << movieGenre << endl;
    cout << "    Year: " << movieYear << endl;
    cout << "  Length: " << movieLength << endl;
    cout << "  Rating: " << movieRating << endl;
    cout << endl;
    }

    string movieTitle;
    string movieGenre;
    string movieYear;
    string movieLength;
    string movieRating;
    vector<MovieRecord> movies; 
};


#endif