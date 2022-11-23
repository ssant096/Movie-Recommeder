#include <string>
#include <vector>
#include <iostream>
#include "../header/moviesList.h"
#include "../header/database.h"
#include "../header/driver.h"
 
using namespace std;

Driver::Driver(){

}

void Driver::displayMainMenu(){
    int userInput;
    cout << "Choose an option (1, 2, or 3):" << endl;
    cout << endl;
    cout << "1. Enter movie title and recieve recommendations" << endl;
    cout << "2. Enter a genre and view movies of entered genre" << endl;
    cout << "3. Add a movie to the list" << endl;
    cin >> userInput;
 
    while(userInput != 1 && userInput != 2 && userInput != 3){
        cout << "Invalid option. Enter 1, 2, or 3" << endl;
        cin >> userInput;
    }
    if(userInput == 1){
        displayMovieTitleInputMenu();
    }
    else if(userInput == 2){
        displayGenreInputMenu();
    }
    else if(userInput == 3){
        displayAddMovieMenu();
    }
}
 
void Driver::displayMovieTitleInputMenu(){
    string stringInput = "";
 
    cout << "Enter a movie title:" << endl;
    getline(cin >> ws, stringInput);
    listToOutput.filterByName(stringInput);

    sortMenu();
}
 
void Driver::sortMenu(){
    int intInput;
 
    cout << "Choose an option (1, 2, 3 or 4):" << endl;
    cout << "1. Don't sort" << endl;
    cout << "2. Sort by rating" << endl;
    cout << "3. Sort by length" << endl;
    cout << "4. Sort by release year" << endl;
    cin >> intInput;
 
    while(intInput != 1 && intInput != 2 && intInput != 3 && intInput != 4){
        cout << "Invalid option. Enter 1, 2, 3, or 4" << endl;
        cin >> intInput;
    }
    if(intInput == 1){
        listToOutput.printListOfMovies();
    }
    else if(intInput == 2){
        listToOutput = MoviesList(listToOutput.returnMoviesList(), "rating");
        listToOutput.printListOfMovies();
    }
    else if(intInput == 3){
        listToOutput = MoviesList(listToOutput.returnMoviesList(), "length");
        listToOutput.printListOfMovies();
    }
    else if(intInput == 4){
        listToOutput = MoviesList(listToOutput.returnMoviesList(), "year");
        listToOutput.printListOfMovies();
    }
}
 
void Driver::displayGenreInputMenu(){
    string genreInput = "";
 
    cout << "Enter a movie genre (Action, Comedy, Adventure, Biography, Drama, Crime, Horror, Mystery, Thriller, Sci-Fi, Romance):" << endl;
    cin >> genreInput;

    listToOutput.filterByGenre(genreInput);
    sortMenu();
}
 
void Driver::displayAddMovieMenu(){
    string newTitle;
    string newGenre;
    int newYear;
    int newLength;
    double newRating;
 
    cout << "Adding new movie to list: " << endl;
    cout << "Enter movie title" << endl;
    getline(cin >> ws, newTitle);
    cout << "Enter movie genre" << endl;
    cin >> newGenre;
    cout << "Enter movie release year" << endl;
    cin >> newYear;
    cout << "Enter movie length (in minutes)" << endl;
    cin >> newLength;
    cout << "Enter movie rating" << endl;
    cin >> newRating;
 
    movieDatabase.addMovieToList(newTitle, newGenre, newYear, newLength, newRating);
    listToOutput = MoviesList(movieDatabase.returnDatabaseList(), "none");
    displayMainMenu();
}