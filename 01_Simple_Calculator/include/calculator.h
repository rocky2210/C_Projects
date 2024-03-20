#ifndef CALCULATOR_H
#define CALCULATOR_H

extern int choice;  // Declare Choice as a global variable

// Function Prototypes
void menu(void);
int menuChoice();
void outupLine();
void outdownLine();
void printHeader();

// Addition function
int add(int num1,int num2);

// Subtraction function
int sub(int num1,int num2);

// Multiply function
int mul(int num1,int num2);

// Divide function
float divide(int num1,int num2);

#endif