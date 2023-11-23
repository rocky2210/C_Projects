# Simple calculator 🛒

This is a simple command-line calculator program written in C. It allows you to perform basic arithmetic operations such as addition, subtraction, multiplication, and division.

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Features](#features)
- [Usage](#usage)
- [What I Learned](#what-i-learned)


## Features

- Addition of two numbers.
- Subtraction of two numbers.
- Multiplication of two numbers.
- Division of two numbers (handles division by zero).
- Display of the previous result.
- Exit option.

## Prerequisites

Before you can use this calculator, you need to have the following:

- A C compiler (e.g., GCC) installed on your system.

## Usage

1. Compile the source code by running the following command:

   ```shell
   make
    ```
2. Run the calculator program by executing the `calculator` executable.

   ```shell
   ./bin/calculator
   ```

3. You will see the menu with the available options:

   ```
    User commands
     1. Addition
     2. Subtraction
     3. Multiplication
     4. Division
     5. Previous result
     6. Exit
   ```

4. Enter the number corresponding to your desired operation:

   - For addition, enter `1`.
   - For subtraction, enter `2`.
   - For multiplication, enter `3`.
   - For division, enter `4`.
   - For the previous result, enter `5`.
   - To exit the program, enter `6`.

## What I Learned

Through this project, I have learned:

1. How to structure a C project with a clear folder structure.
2. Working with Makefiles to automate the build process.
3. Dealing with common programming errors and debugging techniques.
4. Implementing a simple command-line menu.
5. Using ANSI escape codes for text formatting.
6. Gaining experience in C programming, including functions, variables, and control flow.
