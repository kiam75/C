#include <stdio.h>

#include "FunctionsBib.h"

void printEvenOrOdd(int number)
{
    if ((number % 2) == 0)
    {
        printf("Even!\n");
    }
    else
    {
        printf("Odd!\n");
    }
}

int getNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

unsigned int factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;
    }

    return i * factorial(i - 1);
}

int max(int number_a, int number_b)
{
    if (number_a < number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

int min(int number_a, int number_b)
{
    if (number_a > number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

float mean(int number_a, int number_b)
{
    float sum = number_a + number_b;
    float mean = sum / 2.0f;

    return mean;
}
