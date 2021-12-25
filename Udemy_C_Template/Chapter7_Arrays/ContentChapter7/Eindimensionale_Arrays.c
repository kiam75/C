#include <stdio.h>

int main(){

    int numbers[5];
    int numbers2[5] = {13,12,14,154,4};

    for (int i = 0; i < 5; i++){
        numbers[i] = i + 1;
    }

    for (int k = 0; k < 5; k++){
        printf("numbers 1 [%d]= %d\n",k,numbers[k]);
        printf("numbers 2 [%d]= %d\n",k,numbers2[k]);

    }

    return 0;
}
