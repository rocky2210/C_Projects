#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "../include/rockpaperscissors.h"
#include "../include/utils.h"


#define MAX_NAME_LENGTH 20
char name[MAX_NAME_LENGTH];
short choice;
short opponent;

int main(){
    bool value = true;
    printHeader();
    int playerScore = 0,computerScore = 0,draw= 0;
    printf(GRN "\nEnter your name: "reset);
    scanf("%19s",name);
    while(value){
        
        //=====** Menu **=====//
        menu();
        choice = menuChoice();    
        opponent = computerChoice();

        //=====** Score **=====//
        if(choice == 4){
            printf("\n\t\t\t================================\n");
            printf(URED REDB"\t\t\t\tSCOREBOARD"reset"\n");
            printf(GRN"\t\t\t 😋 %s: %d"reset"\n",name,playerScore);
            printf(BLU"\t\t\t 🤖 Computerscore: %d"reset"    \n",computerScore);
            printf(PIK"\t\t\t 🕊️  Draws: %d"reset"    \n",draw);
            printf("\t\t\t================================\n\n");
        }

        //=====** Invalid number **=====//
        if(choice < 1 || choice > 5){
            printf(REDB "\t\t\tNumber is not defined....❌"reset"\n\n");
            // break;
        }

        //=====** Exit **=====//
        if(choice == 5){
        exitAnimation();
        value = false;
        }

        if(choice <= 3){
        printf(YEL"Opponent choice: "BLU"%s\n"reset,(opponent == 1)?"Rock 🪨":(opponent == 2)?"Scissors ✂️":"Paper 📄");
            if (choice == opponent) {
                printf("\n\t\t\t==========================\n");
                printf(MAG "\t\t\t        Draw...🤜🤛\n"reset);
                printf("\t\t\t==========================\n\n");
                draw++;
            } else if (choice == 1) {
                if (opponent == 2){
                    printf("\n\t\t\t==========================\n");
                    printf(GRN "\t\t\t      You win...👍 \n"reset);
                    printf("\t\t\t==========================\n\n");
                    playerScore++;
                }
                else{
                    printf("\n\t\t\t==========================\n");
                    printf(RED "\t\t\t      Opponent win...👎\n"reset);
                    printf("\t\t\t==========================\n\n");
                    computerScore++;
                }
            } else if (choice == 2) {
                if (opponent == 3){
                    printf("\n\t\t\t==========================\n");
                    printf(GRN "\t\t\t      You win...👍 \n"reset);
                    printf("\t\t\t==========================\n\n");
                    playerScore++;
                }
                else{
                    printf("\n\t\t\t==========================\n");
                    printf(RED"\t\t\t      Opponent win...👎 \n"reset);
                    printf("\t\t\t==========================\n\n");
                    computerScore++;
                }
            } else if (choice == 3) {
                if (opponent == 1){
                    printf("\n\t\t\t==========================\n");
                    printf(GRN "\t\t\t      You win...👍 \n"reset);
                    printf("\t\t\t==========================\n\n");
                    playerScore++;
                }
                else{
                    printf("\n\t\t\t==========================\n");
                    printf(RED "\t\t\t       Opponent win...👎 \n"reset);
                    printf("\t\t\t==========================\n\n");
                    computerScore++;
                }
            } else {
                continue;
            }
        }
        }
        return 0;
    }