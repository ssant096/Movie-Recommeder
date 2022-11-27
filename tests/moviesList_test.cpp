#include "gtest/gtest.h"
#include "../header/filter.h"
#include "../header/moviesList.h"
#include <vector>
#include <string>

TEST(moviesListTest, testConstructor) {
    EXPECT_NO_THROW (moviesList *aMovieList());
}

TEST(moviesListTest, testPrintListOfMovies) {
    moviesList *aMovieList();
    EXPECT_NO_THROW (aMovieList.printListOfMovies());
}

TEST(moviesListTest, testPrintListOfMovies) {
    moviesList *aMovieList();
    EXPECT_DEATH (aMovieList.printListOfMovies());
}

TEST(moviesListTest, testConstructor) {
    EXPECT_NO_THROW (moviesList *aMovieList(listToFilter, "rating"));
}

TEST(moviesListTest, testConstructor) {
    EXPECT_NO_THROW (moviesList *aMovieList(listToFilter, "rat"));
}

TEST(moviesListTest, testGenreFilter) {
    moviesList *aMovieList;
    EXPECT_NO_THROW (moviesList *aMovieList.filterByGenre("fantasy"));
}

TEST(moviesListTest, testGenreFilter) {
    moviesList *aMovieList;
    EXPECT_NO_THROW (moviesList *aMovieList.filterByGenre("fanta"));
}

TEST(moviesListTest, testNameFilter) {
    moviesList *aMovieList;
    EXPECT_NO_THROW (moviesList *aMovieList.filterByName("John Wick"));
}

TEST(moviesListTest, testNameFilter) {
    moviesList *aMovieList;
    EXPECT_NO_THROW (moviesList *aMovieList.filterByName("John"));
}

TEST(moviesListTest, testReturnMoviesList) {
    moviesList *aMovieList;
    EXPECT_NO_THROW (moviesList *aMovieList.returnMoviesList());
}