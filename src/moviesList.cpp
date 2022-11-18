#include "../header/moviesList.h"
#include "../header/database.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

MoviesList::MoviesList(string filterType)
{

}

MoviesList::MoviesList(Database* fullDatabase)
{

}

void MoviesList::printListOfMovies()
{
    for(unsigned i=0; i<listOfMovies.size();i++)
    {
        cout<<listOfMovies[i].getTitle()<<", "<<listOfMovies[i].Genre()<<", "<<listOfMovies[i].getReleaseDate()<<", " << ", "<<listOfMovies[i].getLength() << listOfMovies[i].getRating();
    }
}