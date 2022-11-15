#include "movies.h"
#include <iostream>
#include <string.h>

using namespace std;

Movies::Movies(string title_, int rating_, string genre_, int releaseDate_, int length_){
    title = title_;
    rating = rating_;
    genre= genre_;
    releaseDate = releaseDate_
    length= length_;

}

double Movies::getRating(){
    return this->rating;

}

string Movies::getTitle(){
    return this->title;


}

string Movies::Genre(){
    return this->genre;

}

int Movies::getReleaseDate(){
    return this->releaseDate;

}

int Movies::getLength(){
    return this->length;

}