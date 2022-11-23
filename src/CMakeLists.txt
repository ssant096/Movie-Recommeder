add_library(simpleLibrary
  database.cpp
  driver.cpp
  moviesList.cpp
  movies.cpp
  filter.cpp
)

find_library(M_LIB m)
target_link_libraries(simpleLibrary ${M_LIB})