add_library(simpleLibrary
  Database.cpp
  Driver.cpp
  MoviesList.cpp
  Movies.cpp
  Filter.cpp
)

find_library(M_LIB m)
target_link_libraries(simpleLibrary ${M_LIB})