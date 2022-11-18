#include <iostream>
#include "../header/movies.h"
#include "../header/movieRecord.h"
#include "../header/database.h"
#include <string>
#include <vector>

using namespace std;

int main() {
    Database newData;
    newData.loadMovies();

    return 0;
}