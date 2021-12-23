#include <stdio.h>

int main(){

    int num_iterations = 10;

    // for (START; CONTITION; OPERATION)
    for(int i = 0; i < num_iterations; i++){
        printf("%d\n",i);
    }

    printf("2. Variante in 2er Schritten.\n");

    for(int i = 0; i < num_iterations; i+=2){
        printf("%d\n",i);
    }

    printf("3. Variante Rückwärzzählen.\n");

    for(int i = num_iterations-1; i >= 0; i--){
        printf("%d\n",i);
    }

    // Verschachtelte For Schleife
    // k Zeilen x j Spalten - Matrix
    for(int k = 0; k < 4; k++){
        printf("|");
        for(int j = 0; j < 3; j++){
            printf("(%d,%d)",k,j);
        }
        printf("|\n");
    }

    // Zahlenpyramide
    int height = 4;
    
    for (int i = 1; i <= height; i++){
        for ( int j = 0; j < i; j++ ){
            printf("1");
        }
        printf("\n");
    }

    for (int k = height; k >= 0; k--){
        //  Durch j >= 0 werden 5 Einsen geschrieben.
        for (int j = k; j >= 0; j--){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
