#include "gtest/gtest.h"
#include "../header/filter.h"
#include "../header/movies.h"
#include <vector>
#include <string>

TEST(filterTest, testConstructor) {
    EXPECT_NO_THROW (Filter newFilter);
}

TEST(filterTest, testConstructor2) {
    vector<Movies> moviesList;
    EXPECT_NO_THROW (Filter newFilter(moviesList));
}

TEST(filterTest, testSortByLength) {
    vector<Movies> moviesList;
    Filter newFilter(moviesList);
    EXPECT_NO_THROW (newFilter.sortByLength());
}

TEST(filterTest, testSortByGenre) {
    vector<Movies> moviesList;
    Filter newFilter(moviesList);
    EXPECT_NO_THROW (newFilter.sortByGenre("Action"));
}

TEST(filterTest, testSortByYear) {
    vector<Movies> moviesList;
    Filter newFilter(moviesList);
    EXPECT_NO_THROW (newFilter.sortByYear());
}

TEST(filterTest, testSortByRating) {
    vector<Movies> moviesList;
    Filter newFilter(moviesList);
    EXPECT_NO_THROW (newFilter.sortByRating());
}

TEST(filterTest, testfindSimilarMovies) {
    vector<Movies> moviesList;
    Filter newFilter(moviesList);
    EXPECT_NO_THROW (newFilter.findSimilarMovies("Guardians of the Galaxy"));
}
