[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=8879795&assignment_repo_type=AssignmentRepo)
# Movie Recommender
 
 [Shan Santhakumar](https://github.com/ssant096), [Tim Cheung](https://github.com/tcheu024), [Hirsch Chheda](https://github.com/Hirschheda), [Yash Singhal](https://github.com/ysinghal03)

## Project Description
 Our team is proposing to make a Movie Recommender. We choose this as our project because we felt that a movie recommender involves elements we have learned about in our previous classes such as sorting algorithms. This particular project will also allow us to create and incorporate multiple classes that we can use together to give the user the best possible prediction of what movies they like to watch. 
 
 We plan to use C++ as the primary language for the project and our choice of IDE is going to be VSCODE. This is because we also plan on using Valgrind as our primary debugging tool to fix memory leaks and other errors that may occur during production.

The input of our project will be movie genres, movie titles, and a method of sorting (by release date or rating for example). The output will be a collection of movies with ratings and the release year. 

Our project will allow users to search for movies based on genre and also display a list of recommended similar movies based off of a user entered movie title. Lastly, all of the displayed movies will have the option of being sorted by either rating or release date. 

## Class Diagram
 > For our project, we will have 3 classes MoviesList, Movies, and Filter. The Movies class has an aggregational relationship with MoviesList while the Filter class has a compositional relation. The MoviesList class contains a list of movies along with the total capacity and how many movies it currently holds. The Movies class is used to describe each specific movie with items including its title, genre, rating, release date, and views. Finally, the Filter class is used to sort the movies into specific categories such as views, genre, year, and give recommendations. 
 
 
```mermaid
 classDiagram
 MoviesList o-- Movies
 MoviesList *-- Filter
 class Movies{
   -title : string
   -genre : string
   -rating : int
   -releaseDate : int
   -views : int
   +getRating() int
   +getTitle() string
   +getGenre() string
   +getReleaseDate() int
   +getViews() int
 }
 class MoviesList{
   -ListOfMovies : Movies**
   -numMovies : int
   -listCapacity : int
   +printListOfMovies() void
 }
 class Filter{
   +sortByViews() void
   +sortByGenre(string movieGenre) void
   +sortByYear() void
   +findSimilarMovies() void
 }
 
 ```
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase I.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
