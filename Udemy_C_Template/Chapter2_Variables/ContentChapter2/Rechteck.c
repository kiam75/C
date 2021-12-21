#include<stdio.h>

int main(){
    // Rectangle Example
    double a = 0;
    double b = 0;
    double perimeter  = 0;
    double area = 0;

    // 1.) Read the values for a, b from the user
    printf("Please enter the value for side a: ");
    scanf("%lf", &a);
    printf("\nPlease enter the value for side b: ");
    scanf("%lf",&b);
    // 2.) Compute the perimeter and area of the rectangle
    perimeter = 2*(a+b);
    area = a * b;
    // 3.) Print the computed values to the console
    printf("The perimeter of the rectangle with %lf and %lf is: %lf LE \n",a,b,perimeter);
    printf("The area of the rectangle with %lf and %lf is: %lf FE \n",a,b,area);
}
