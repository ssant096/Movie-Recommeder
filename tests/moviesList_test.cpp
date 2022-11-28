#include "gtest/gtest.h"
#include "../header/movies.h"
#include "../header/moviesList.h"
#include <vector>
#include <string>

TEST(moviesListTest, testPrintListOfMovies) {
    MoviesList aMovieList;
    EXPECT_NO_THROW (aMovieList.printListOfMovies());
}

TEST(moviesListTest, testConstructor) {
    EXPECT_NO_THROW (MoviesList aMovieList);
}

TEST(moviesListTest, testConstructor2) {
    vector<Movies> listToFilter;
    EXPECT_NO_THROW (MoviesList aMovieList(listToFilter, "rating"));
}

TEST(moviesListTest, testConstructor3) {
    vector<Movies> listToFilter;
    EXPECT_NO_THROW (MoviesList aMovieList(listToFilter, "rat"));
}

TEST(moviesListTest, testGenreFilter) {
    MoviesList aMovieList;
    EXPECT_NO_THROW (aMovieList.filterByGenre("fantasy"));
}

TEST(moviesListTest, testGenreFilter2) {
    MoviesList aMovieList;
    EXPECT_NO_THROW (aMovieList.filterByGenre("fanta"));
}

TEST(moviesListTest, testNameFilter) {
    MoviesList aMovieList;
    EXPECT_NO_THROW (aMovieList.filterByName("John Wick"));
}

TEST(moviesListTest, testNameFilter2) {
    MoviesList aMovieList;
    EXPECT_NO_THROW (aMovieList.filterByName("John"));
}

TEST(moviesListTest, testReturnMoviesList) {
    MoviesList aMovieList;
    EXPECT_NO_THROW (aMovieList.returnMoviesList());
}