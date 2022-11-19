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
    string stringInput;
 
    cout << "Enter a movie title:" << endl;
    getline(cin >> ws, stringInput);
    MoviesList("recommend", stringInput);// changes movie list in listToOutput into a new filtered movie list
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
        listToOutput = MoviesList("rating");
        listToOutput.printListOfMovies();
    }
    else if(intInput == 3){
        listToOutput = MoviesList("length");
        listToOutput.printListOfMovies();
    }
    else if(intInput == 4){
        listToOutput = MoviesList("year");
        listToOutput.printListOfMovies();
    }
 
}
 
void Driver::displayGenreInputMenu(){
    string genreInput;
    int answer;
 
    cout << "Choose a movie genre:" << endl;
    cout << "1. Action" << endl;
    cout << "2. Comedy" << endl;
    cout << "3. Adventure" << endl;
    cout << "4. Biography" << endl;
    cout << "5. Drama" << endl;
    cout << "6. Crime" << endl;
    cout << "7. Animation" << endl;
    cout << "8. Horror" << endl;
    cout << "9. Mystery" << endl;
    cout << "10. Thriller" << endl;
    cout << "11. Sci-Fi" << endl;
    cout << "12. Romance" << endl;
    cin >> answer;

    while (answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9 && answer != 10 && 
    answer != 11 && answer != 11){
        cout << "Invalid Input. Enter a number from 1-12" << endl;
        cin >> answer;
    }

    if(answer == 1){MoviesList("Action");}
    else if(answer == 2){MoviesList("Comedy");}
    else if(answer == 3){MoviesList("Adventure");}
    else if(answer == 4){MoviesList("Biography");}
    else if(answer == 5){MoviesList("Drama");}
    else if(answer == 6){MoviesList("Crime");}
    else if(answer == 7){MoviesList("Animation");}
    else if(answer == 8){MoviesList("Horror");}
    else if(answer == 9){MoviesList("Mystery");;}
    else if(answer == 10){MoviesList("Thriller");}
    else if(answer == 11){MoviesList("Sci-Fi");}
    else if(answer == 12){MoviesList("Romance");}

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
    displayMainMenu();
}