#include "gtest/gtest.h"
#include "../header/database.h"
#include <vector>
#include <string>

TEST(databaseTest, testConstructor){
    EXPECT_NO_THROW (Database Database);
}

TEST(databaseTest, testConstructor2){
    EXPECT_NO_THROW (Database initDatabase);
}