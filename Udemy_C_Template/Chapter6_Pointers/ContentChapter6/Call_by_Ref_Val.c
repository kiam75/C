#include <stdio.h>

// Call by Value: Nur der Wert wird übergeben (copy)
float add_one(float b){

    printf("add - Memoryaddress of b: %p\n",&b);
    return (b + 1.0f);
}

// Call by Refernece: Kein neuer Speicher
void sub_one(float *c){

    printf("sub - Memoryaddress of b: %p\n",&c);
    *c = *c - 1.0f;
}

int main(){

    float wert = 12.0f;

    printf("Add one to var wert = %f (%p) ==> %f\n",wert,&wert, add_one(wert));
    printf("Sub one of var wert = %f (%p) ==> \n",wert,&wert);
    sub_one(&wert);
    printf("After Sub ( Call by Reference ): %f",wert);
    return 0;
}
