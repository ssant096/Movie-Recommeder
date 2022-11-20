#include "../header/movies.h"
#include <iostream>
#include <string>

using namespace std;

Movies::Movies(string title_, string genre_, int releaseDate_, int length_, double rating_) {
  title = title_;
  genre = genre_;
  releaseDate = releaseDate_;
  length = length_;
  rating = rating_;
}

double Movies::getRating() { return this->rating; }

string Movies::getTitle() { return this->title; }

string Movies::Genre() { return this->genre; }

int Movies::getReleaseDate() { return this->releaseDate; }

int Movies::getLength() { return this->length; }