# Week 4: Test-Driven Development Assignment 

## Overview

This repository pertains to the test driven development exercise. The group members of which are :

- Shivam Sehgal
- Abraruddin Syed
- Krishna Hundekari
- Sai Surya Sriramoju

# C++ Boilerplate v2 Badges
![CICD Workflow status](https://github.com/shivamsehgal77/TDD-pid-controller/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg) [![codecov](https://codecov.io/gh/shivamsehgal77/TDD-pid-controller/branch/main/graph/badge.svg)](https://app.codecov.io/gh/shivamsehgal77/TDD-pid-controller) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

## Part 1 
The members of the pair for Part 1 of this repository are :c
 - Shivam Sehgal (Driver)
 - Abraruddin Syed (Navigator)

 ## Part 2 
The members of the pair for Part 2 of this repository are :
 - Krishna Hundekari(Driver)
 - Sai Surya Sriramoju (Navigator)
 
## Description
The design contains one class PIDController class. The class contains 3 attributes $k_p$, $k_i$, $k_d$ and 
three member functions actualVelocity, sumError and controlOutput. The class is used to reach the target velocity given the actual velocity.


The UML class diagram is as follows : 

Fig 1 :  UML class diagram  
<img alt="UML" src="UML-PID-Controller/UML_B-1.png" width="400" /> 


Fig 2 :  Activity diagram  
<img alt="Activity" src="UML-PID-Controller/Class_Activity_Diagram.png" width="400" />  


## Steps to build the library and run test cases
``` bash
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run tests:
  cd build/; ctest; cd -
# Clean and start over:
  rm -rf build/
```


## Steps to geneate code coverage report
```bash
# if you don't have gcovr or lcov installed, do:
  sudo apt-get install gcovr lcov
# Set the build type to Debug and WANT_COVERAGE=ON
  cmake -D WANT_COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug -S ./ -B build/
# Now, do a clean compile, run unit test, and generate the coverage report
  cmake --build build/ --clean-first --target all test_coverage
# open a web browser to browse the test coverage report
  open build/test_coverage/index.html



