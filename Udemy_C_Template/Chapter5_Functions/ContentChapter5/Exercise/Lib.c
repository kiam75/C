#include <stdio.h>

#include "Lib.h"

int getNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int min(int a, int b){
    if (a < b){
        return a; 
    }
    return b;
}

float mean(int a, int b){

    return((a+b)/2);
}
