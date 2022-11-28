#include "gtest/gtest.h"
#include "../header/database.h"
#include <vector>
#include <string>

TEST(databaseTest, testConstructor){
    Database database;
    EXPECT_NO_THROW (database.initDatabase());
}

TEST(databaseTest, testConstructor2){
    EXPECT_NO_THROW (Database database);
}

TEST(databaseTest, testAddFunction){
    Database database;
    EXPECT_NO_THROW (database.addMovieToList("test", "Action", 2011, 120, 8.9));
}

TEST(databaseTest, testDeleteFunction){
    Database database;
    EXPECT_NO_THROW (database.deleteLastMovieFromList());
}

TEST(databaseTest, testReturnFunction){
    Database database;
    EXPECT_NO_THROW (database.returnDatabaseList());
}
