#include <stdio.h>

int main(){

    double a = 0.3;
    double b = 0.2;
    double c = a - b; 
    double d = 0.1;
    // Können nicht richtig dargestellt werden, da keine exakte 2er Potenz
    printf("a: %.35lf\n",a);
    printf("b: %.35lf\n",b);
    printf("c: %.35lf\n",c);
    printf("d: %.35lf\n",d);

    // Kann richtig dargestellt werden, da exakte 2er Potenz
    double e = 0.5;

    printf("e: %.35lf\n",e);

    return 0;
}
