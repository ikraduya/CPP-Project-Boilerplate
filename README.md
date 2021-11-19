# C++ Project Boilerplate
![github CI status](https://github.com/ikraduya/CPP-Project-Boilerplate/actions/workflows/ci.yml/badge.svg)

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

## Building using CMake
``` bash
> cmake -S . -B build -DCMAKE_BUILD_TYPE=[Debug | Release]
> cmake --build build
> cd build
> ./main
> ctest # Run tests
```

> For build type, you must choose between `Debug` or `Release`
