cmake_minimum_required(VERSION 3.14)

# Project name, version, and languages
project(CPP_PROJECT_BOILERPLATE VERSION 1.2.3 LANGUAGES CXX)

# --------------------------------------------------------------------------------
#                                  Locate files
# --------------------------------------------------------------------------------
set(SOURCES
  src/exampleClass.cpp
)
set(TESTFILES
  tests/main.cpp
)
set(LIBRARY_NAME exampleProject)  # Default name for the library built from src/*.cpp

# --------------------------------------------------------------------------------
#                                     Build
# --------------------------------------------------------------------------------
# Compile all sources into a library
add_library(${LIBRARY_NAME} OBJECT ${SOURCES})
# Lib needs to see header files, and library users must also able to see (PUBLIC)
target_include_directories(${LIBRARY_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

# An executable for the file app/main.cpp
add_executable(main app/main.cpp)
target_link_libraries(main PRIVATE ${LIBRARY_NAME})

# Set the properties required, e.g. C++ standard used. Apply to library and main
set_target_properties(
  ${LIBRARY_NAME} main
    PROPERTIES
      CXX_STANDARD 17
      CXX_STANDARD_REQUIRED YES
)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  # Set up tests
  add_subdirectory(tests)
  enable_testing()
endif()