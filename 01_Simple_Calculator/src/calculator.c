#include <stdio.h>
#include "../include/calculator.h"
#include "../include/utils.h"

int choice;

// Function definitions
int add(int num1 , int num2){
    return num1 + num2;
}

int sub(int num1, int num2){
    return num1 - num2;
}

int mul(int num1, int num2){
    return num1 * num2;
}

float divide(int num1, int num2){
    if(num2 == 0){
        // fprintf(stderr,"Error:Division by zero\n");
        return 0.0;
    }else{
        return (float)num1 / num2;
    }
}

void printHeader() {
    printf("  ____  _                 _         ____      _            _       _              \n");
    printf(" / ___|(_)_ __ ___  _ __ | | ___   / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __  \n");
    printf(" \\___ \\| | '_ ` _ \\| '_ \\| |/ _ \\ | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__| \n");
    printf("  ___) | | | | | | | |_) | |  __/ | |__| (_| | | (__| |_| | | (_| | || (_) | |    \n");
    printf(" |____/|_|_| |_| |_| .__/|_|\\___|  \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|    \n");
    printf("                   |_|                                                            \n");
}

void menu(){
    printf(GRN"\n\n┌───────────────────────────────────────┐\n"reset);
    printf(GRN"│"URED"\tUser Commands"reset"                   "GRN"│\n");
    printf(GRN"│                                       │\n");
    printf(GRN"│"BLU"\t 1. Addition                    "GRN"│\n");
    printf(GRN"│"BLU"\t 2. Subtraction                 "GRN"│\n");
    printf(GRN"│"BLU"\t 3. Multiplication              "GRN"│\n");
    printf(GRN"│"BLU"\t 4. Division                    "GRN"│\n");
    printf(GRN"│"BLU"\t 5. Previous result             "GRN"│\n");
    printf(GRN"│"BLU"\t 6. Exit                        "GRN"│\n");
    printf(GRN"└───────────────────────────────────────┘\n"reset);
    printf(RED"Note: Only accepts two values at a time\n\n\n"reset);

}

int menuChoice(){
    printf(YEL"Enter the choice: "reset);
    scanf("%d",&choice);
    return choice;
}

void outupLine(){
    printf(MAG"┌───────────────────────────────────┐");
}


void outdownLine(){
    printf(MAG"└───────────────────────────────────┘");
}
