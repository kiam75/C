#include <stdio.h>
#include <stdlib.h> 

int *createArray(unsigned int length, int value){
    
    //Speicher auf Heap reservieren
    int *array = (int *)malloc(3*sizeof(int));

    //Prüfen ob Speicher auf dem Heap reserviert werden konnte
    //Wenn nicht, dann NULL
    if (array == NULL){
        return NULL;
    }

    for(unsigned int i = 0; i < length; i++){
        array[i] = value;
    }
    return array;
    
}

int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value){

    int **matrix = (int **)malloc(num_rows * sizeof(int *));

    for(unsigned int i = 0; i < num_rows; i++){
        matrix[i] = createArray(num_cols,value);
    }

    return matrix;

}

void printArray(int *array, unsigned int length){


    for(unsigned int k =0 ;k < length; k++){
        printf("[%lu]: %d\n",k,array[k]);
    }

}

void printMatrix(int** mat, unsigned int num_rows, unsigned int num_cols){

    for (unsigned int i = 0; i < num_rows; ++i){
        for (unsigned int j = 0; j < num_cols; ++j ){
            printf("| ([%lu][%lu])=%d | ",i,j,mat[i][j]);
        }
        printf("\n");
    }

}

int *freeArray(int *array){

    // Prüfe ob Speicher freigegeben werden muss
    if(array != NULL){
        free(array);
    }

    return NULL;
}

// Hier müssen zuerst alle 1D arrays auf die Verwiesen wird gelöscht werden.
// Im Anschluss kann der Speicher vom Pointer zur Matrix freigegeben werden.
int **freeMatrix(int **matrix, unsigned int num_rows){

    if (matrix != NULL){
        for(unsigned int i = 0; i < num_rows; ++i){
            matrix[i] = freeArray(matrix[i]);
        }
    }
    
    free(matrix);
    return NULL;

}


int main(){
    
    int length = 3;

    int *array = createArray(length,1);

    printArray(array,length);
    array = freeArray(array);

    int rows = 2;
    int columns = 3;
    int **mat = createMatrix (rows,columns,7);
    printMatrix(mat,rows,columns);
    freeMatrix(mat,rows);

    return 0;
}
