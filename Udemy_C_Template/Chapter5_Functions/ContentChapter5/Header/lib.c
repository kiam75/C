#include <stdio.h>
#include "lib.h"
void printEven(int number){
    if((number % 2) == 0){
        printf("The number is Even.");
    }
    else{
        
        printf("The number is odd .");

    }
}

int getNumber(){
    
    int zahl = 0;
    printf("Bitte eine Zahl eingeben: ");
    scanf("%d",&zahl);

    return zahl;

}
