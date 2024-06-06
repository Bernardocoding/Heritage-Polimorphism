cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Collect all source files from the current directory
file(GLOB SOURCES "*.cpp" "*.hpp")

# Print the collected sources (for debugging purposes)
message("Collected source files: ${SOURCES}")

# Include header files from the current directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Check if sources are found
if(NOT SOURCES)
    message(FATAL_ERROR "No source files found. Check the directory path and file extensions.")
endif()

# Create an executable
add_executable(my_program ${SOURCES})