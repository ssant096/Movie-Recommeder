#include <string>
#include <vector>
#include <iostream>
//#include "../header/MoviesList.h"
//#include "../header/Database.h"

using namespace std;

Driver::Driver(){
    movieDatabase = new Database;
    listToOutput = new MoviesList;
}

void Driver::displayMainMenu(){
    int userInput;

    cout << "Choose an option (1, 2, or 3):" << endl;
    cout << endl;
    cout << "1. Enter movie title and recieve recommendations" << endl;
    cout << "2. Enter a genre and view movies of entered genre" << endl;
    cout << "3. Add a movie to the list" << endl;
    cin >> userInput;

    while(userInput != 1 || userInput != 2 || userInput != 3){
        cout << "Invalid option. Enter 1, 2, or 3"
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
    string stringInput;

    cout << "Enter a movie title:" << endl;
    getline(cin, stringInput);
    listToOutput = new MoviesList("recommend");// changes movie list in listToOutput into a new filtered movie list
    sortMenu();
}

void Driver::sortMenu(){
    int intInput;
    Filter sortMovies;

    cout << "Choose an option (1, 2, 3 or 4):" << endl;
    cout << "1. Don't sort" << endl;
    cout << "2. Sort by rating" << endl;
    cout << "3. Sort by length" << endl;
    cout << "4. Sort by release year" << endl;
    cin << intInput;

    while(intInput != 1 || intInput != 2 || intInput != 3 || intInput != 4){
        cout << "Invalid option. Enter 1, 2, 3, or 4"
    }
    if(intInput == 1){
        listToOutput.printListOfMovies();
    }
    else if(intInput == 2){
        listToOutput = new MoviesList("rating");
        listToOutput.printListOfMovies();
    }
    else if(intInput == 3){
        listToOutput = new MoviesList("length");
        listToOutput.printListOfMovies();
    }
    else if(intInput == 4){
        listToOutput = new MoviesList("year");
        listToOutput.printListOfMovies();
    }

}

void Driver::displayGenreInputMenu(){
    string genreInput;

    cout << "Enter a movie genre:" << endl;
    getline(cin, genreInput);
    listToOutput = new MoviesList("genre");// changes movie list in listToOutput into a new filtered movie list
    sortMenu();
}

void Driver::displayAddMovieMenu(){
    string newTitle;
    string newGenre;
    int newRating;
    int newYear;
    int newLength;

    cout << "Adding new movie to list: " << endl;
    cout << "Enter movie title" << endl;
    cin >> newTitle;
    cout << "Enter movie genre" << endl;
    cin >> newGenre;
    cout << "Enter movie rating" << endl;
    cin >> newRating;
    cout << "Enter movie release year" << endl;
    cin >> newYear;
    cout << "Enter movie length (in minutes)" << endl;
    cin >> newLength;

    movieDatabase.addMovieToList(listToOutput, newTitle, newRating, newLength, newYear, newGenre);
}