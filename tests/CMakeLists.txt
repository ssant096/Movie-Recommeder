cmake_minimum_required(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/src")
add_subdirectory(googletest)

add_executable(runAllTests
	movies_test.cpp
	filter_test.cpp
	moviesList_test.cpp
)

target_link_libraries(runAllTests gtest gtest_main)
target_link_libraries(runAllTests simpleLibrary)