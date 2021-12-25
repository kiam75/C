#include <stdio.h>

int main(){

    // 1D Array: Vector
    // 2D Array: Matrix

    double M[3][3];
    double N[3][2] = {{1,3},{7,8},{4,6}};
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            M[i][j]= i*j;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           printf(" M[%d][%d]= %lf\n",i,j,M[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           printf(" M[%d][%d]= %lf\n",i,j,M[i][j]);
        }
    }
    printf("===== Initialisierte Variante ======\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
           printf(" N[%d][%d] = %lf\n",i,j,N[i][j]);
        }
    }

    return 0;
}
