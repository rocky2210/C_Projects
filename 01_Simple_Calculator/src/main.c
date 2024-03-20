#include <stdio.h>
#include <stdlib.h>
#include "../include/calculator.h"
#include "../include/utils.h"


int main(){

    int num1,num2,results;
    printHeader();

    while(1){
        menu();
        choice = menuChoice();

        if(choice == 6){
            printf("Exit");
            exit(0);
        }

    if(choice < 1 || choice > 6){
        printf("\n");
        printf(REDB"Invalid choice\n"reset);
        continue;
    }

    if(choice != 5){
        printf(GRN"\nEnter a First Number : "reset);
        scanf("%d",&num1);
        printf(GRN"Enter a Second Number : "reset);
        scanf("%d",&num2);
        printf("\n");
    }else{
        printf(GRN"Previous result: %d\n",results);
        num1 = results;
        printf(GRN"Enter a Second Number : "reset);
        scanf("%d",&num2);
        printf("\n");
        menuChoice();
    }

        switch (choice){
        case 1:
            results = add(num1,num2);
            outupLine();
            printf(CYN"\n| Addition of %d and %d is : %d\n",num1,num2,results);
            outdownLine();
            break;
        case 2:
            results = sub(num1,num2);
            outupLine();
            printf(CYN"\n| Subtraction of %d and %d is : %d\n",num1,num2,results);
            outdownLine();
            break;
        case 3:
            results = mul(num1,num2);
            outupLine();
            printf(CYN"\n| Multiplication of %d and %d is : %d\n",num1,num2,results);
            outdownLine();
            break;
        case 4:
            results = divide(num1,num2);
            outupLine();
            printf(CYN"\n| Division of %d and %d is : %d\n",num1,num2,results);
            outdownLine();
            break;
        default:
            break;
        }
    }
    return 0;
}