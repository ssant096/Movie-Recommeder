#include "movies.h"
#include <iostream>
#include <string.h>

using namespace std;

Movies::Movies(string title_, int rating_, string genre_, int releaseDate_, int views_){
    title = title_;
    rating = rating_;
    genre= genre_;
    releaseDate = releaseDate_;
    views= views_;

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

int Movies::getViews(){
    return this->views;

}