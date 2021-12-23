#include <stdio.h>

int main(){

    int num_iterations = 3;
    int i = 0;

    while(i < num_iterations){
        printf("Hello World\n");
        i++;
    }

    // Sprunganweisung
    i = 0;
    while(1){
        printf("In Sprungvariante: Hello World\n");
        i++;
        if(i >= num_iterations){
            break;
        }
    }

    // Do-While Schleife

    int num_iterations_2 = 5;
    int j = 0;
    int rate_zahl = 34;
    int selection = 0;

    printf("Welcome to our guessing game!\n ");
    printf("You have to guess the right number from the interval of [0-40]\n");


    do{
        j++;
        printf("Enter your number:");
        scanf("%d",&selection);
        if ((selection < 0) || (selection > 40)){
            printf("You number isn't within the rage oh 0 - 40\n");
            printf("There are %d tries left.",num_iterations_2 - j);
        }
        else if(rate_zahl == selection){
            printf("You won!\n");
            break;
        } 
        else{
            printf("Try one more time.\n");
            printf("There are %d tries left.\n",num_iterations_2 - j);
        }
    } while (j < num_iterations_2 );
    return 0;
}
