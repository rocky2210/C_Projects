#ifndef CALCULATOR_H
#define  CALCULATOR_H

extern int choice; // Declare choice as a global variable

// Function prototypes
void menu(void);
int menuChoice();
void outline();
void printHeader();

//addition function
int add(int num1,int num2);

//subtraction function
int sub(int num1,int num2);

//multiply function
int mul(int num1,int num2);

//divide function
float div(int num1,int num2);

#endif