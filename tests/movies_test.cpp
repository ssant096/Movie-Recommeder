#include "gtest/gtest.h"
#include "../header/movies.h"
#include <vector>
#include <string>

TEST(moviesTest, testConstructor) {
    EXPECT_NO_THROW (Movies *aMovie = new Movies("Title", "Genre", 2020, 120, 8.0));
}

TEST(moviesTest, testGetRating ) {
    Movies *aMovie = new Movies("Title", "Genre", 2020, 120, 8.0);
    EXPECT_DOUBLE_EQ (aMovie->getRating(),8.0);
}

TEST(moviesTest, testGenre) {
    Movies *aMovie = new Movies("Title", "Genre", 2020, 120, 8.0);
    EXPECT_EQ (aMovie->Genre(), "Genre");
}

TEST(moviesTest, testGetTitle) {    
    Movies *aMovie = new Movies("Title", "Genre", 2020, 120, 8.0);
    EXPECT_EQ (aMovie->getTitle(), "Title");
}

TEST(moviesTest, testGetReleaseDate) {
    Movies *aMovie = new Movies("Title", "Genre", 2020, 120, 8.0);
    EXPECT_EQ (aMovie->getReleaseDate(), 2020);
}

TEST(moviesTest, testGetLength) {
    Movies *aMovie = new Movies("Title", "Genre", 2020, 120, 8.0);
    EXPECT_EQ (aMovie->getLength(), 120);
}