#include <stdio.h>

int main()
{

    int i = 5;
    char *name = 'Maik';
    char **namen = {'Maik', 'Nicole', 'Merlin', 'Siri'};

    printf("Wert von i:%d an Adresse: %p.\n", i, &i);
    return 0;
}
