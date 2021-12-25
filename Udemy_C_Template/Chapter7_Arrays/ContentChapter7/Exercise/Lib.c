#include <stdio.h>

#include "Lib.h"

float meanArray(int *array, unsigned int length)
{
    int sum = 0;

    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float)(sum) / (float)(length);
}


float maxArray(int* v,unsigned int length){
    float  max = v[0];
    

    for(int i = 0 ; i < length; i++){
        if(max < v[i]){
            max = v[i]; 
        }
    }

    return max;
}

float minArray(int* v,unsigned int length){
    float  min = v[0];
    

    for(int i = 0 ; i < length; i++){
        if(min > v[i]){
            min = v[i]; 
        }
    }

    return min;
}
