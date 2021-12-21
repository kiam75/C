#include<stdio.h>

int main(){
    
    // int = integer number, in Math Z; (32 bit, 4 byte)
    
    int my_number = 42;
    int my_number2 = 1337;

    // unsigned int , in Math N 
    unsigned int unsigned_int = 0;

    //foat = floating point, in Math R; (32 bit, 4 byte); f = type specifier float
    float my_float = 1.25f;

    // double = floating point (64 bit, 8 byte)
    double my_double = 1.25;
    
    // Some calculations
    float a = 5.0;
    float b = 2.0;
    float c;

    // Addition
    c = a + b;
    printf("%f + %f = %f\n",a,b,c);
    
    // Subtraction
    c = a - b;
    printf("%f - %f = %f\n",a,b,c);

    // Multiplication
    c = a * b;
    printf("%f * %f = %f\n",a,b,c);

    // Division
    c = a / b;
    printf("%f / %f = %f\n",a,b,c);

    // Verkuerzte Schreibweise
    c = 1.0f;
    //c = c + a;
    c += a;
    printf("%f += %f\n",c,a);

    //c = c - b;
    c -= b;
    printf("%f -= %f\n",c,b);

    //c = c * b;
    c *= b;
    printf("%f *= %f\n",c,b);

    //c = c / b;
    c /= b;
    printf("%f /= %f\n",c,b);

    // Konsolenausgabe
    int x = 1;
    unsigned int y = 1u;
    float z = 1.0f;
    double d = 1.0;

    printf("The value of variable a is: %d\n",x);
    printf("The value of variable y is: %u\n",y);
    printf("The value of variable z is: %f\n",z);
    printf("The value of variable d is: %lf\n",d);
    return 0;
}
