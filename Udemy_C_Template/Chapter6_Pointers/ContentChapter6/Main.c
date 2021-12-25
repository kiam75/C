#include <stdio.h>

int main(){

    int value = 12234;

    // &: Memoryaddress
    printf("Value of variable: %d\n",value);
    printf("Variable at address: %p\n",&value);
    printf("Size of the variable: %lu bytes \n",sizeof(value));

    // Pointervariable anlegen
    int *my_pointer = &value;
    printf("Memory address of my_pointer: %p --points to--> address at %p (adress of the variable) \n",&my_pointer, my_pointer);
    printf("Value of the reference of my_pointer: %d \n",*my_pointer);

    return 0;
}
