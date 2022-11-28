#include "gtest/gtest.h"
#include "../header/database.h"
#include <vector>
#include <string>

TEST(databaseTest, testConstructor){
    EXPECT_NO_THROW (Database initDatabase());
}

TEST(databaseTest, testConstructor2){
    EXPECT_NO_THROW (Database Database());
}

TEST(databaseTest, testAddFunction){
    Database Database();
    EXPECT_NO_THROW (Database addMovieToList(test, Action, 2011, 120, 8.9));
}

TEST(databaseTest, testDeleteFunction){
    Database Database();
    EXPECT_NO_THROW (Database deleteLastMovieFromList());
}

TEST(databaseTest, testReturnFunction){
    Database Database();
    EXPECT_NO_THROW (Database returnDatabaseList());
}
