#include "../header/moviesList.h"
#include <iostream>
#include <string>
#include <vector>
#include "../header/filter.h"
using namespace std;

MoviesList::MoviesList(string filterType)
{
    if(filterType=="genre"||filterType=="Genre")
    {
        cout<<"Enter which genre\n";
        string genre;
        cin>>genre;
        sortByGenre(genre);
    }
    else if(filterType=="year"||filterType=="Year")
        sortByYear();
    else if(filterType=="length"||filterType=="Length")
        sortByLength();
}

MoviesList::MoviesList(Database* fullDatabase)
{

}

void MoviesList::printListOfMovies()
{
    for(unsigned i=0; i<listOfMovies.size();i++)
    {
        cout<<listOfMovies[i].getTitle()<<", "<<listOfMovies[i].getReleaseDate()<<", "<<listOfMovies[i].getGenre()<<", "<<listOfMovies[i].getGenre()<<", "<<listOfMovies[i].getLength();
    }
}