#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

extern short choice;
extern short opponent;

// Functions Prototypes
void menu(void);
int menuChoice();
int computerChoice();
void exitAnimation();
void printHeader();

#endif
