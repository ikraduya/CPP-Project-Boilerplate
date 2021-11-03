# C++ Project Boilerplate
Set-up the minimum project structure and boilerplate code for modern C++ (C++17). Including:
- Sources, headers, and mains separated in distinct folders
- CMake for compiling
- Tests using 'Google tests'
- CPPLint.cfg to store cpplint configuration
- .gitignore for C++ project
- CI using Github Actions

## Structure
``` text
.
├── CMakeLists.txt
├── app
│   └── main.cpp
├── include
│   └── exampleClass.hpp
├── src
│   └── exampleClass.cpp
└── tests
    ├── CMakeLists.txt
    ├── exampleTest.cpp
    └── anotherTest.cpp
```

## Building
Build by making a build directory (i.e. `build/`), run `cmake` in that dir, then use `make` to build.

Example:
``` bash
> mkdir build && cd build
> cmake .. -DCMAKE_BUILD_TYPE=[Debug | Release]
> make
> ./main
> make test # Makes and runs tests
```
