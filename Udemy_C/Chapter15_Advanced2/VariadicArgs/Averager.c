#include <stdarg.h>
#include <stdio.h>

double average(int count, ...)
{
    double sum = 0.0;

    va_list args = NULL;
    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        sum += va_arg(args, double);
    }

    va_end(args);

    return sum / count;
}

int main()
{
    double avg = average(3, 1.0, 2.0, 3.0);

    printf("%lf\n", avg);

    return 0;
}
