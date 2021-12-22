#include <stdio.h>

int main(){

    int a = 22;
    int b = 42;
    
    // Seit C99 Standard gibt es den Datentyp
    _Bool comparison;   
    // Man kann auch eine int variable nehmen
    // int comparison;
   
   comparison = a > b;
   printf("a > a = %d\n", comparison);

   comparison = a < b;
   printf("a < b = %d\n", comparison);

   comparison = a == b;
   printf("a == b = %d\n", comparison);
   
   comparison = a != b;
   printf("a != b = %d\n", comparison);

   comparison = a <= b;
   printf("a <= b = %d\n", comparison);
   
   comparison = a >= b;
   printf("a >= b = %d\n", comparison);
   
    return 0;
}
