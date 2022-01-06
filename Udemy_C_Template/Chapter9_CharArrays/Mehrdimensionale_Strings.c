#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Anzahl Namen die aufgenommen werden sollen

    unsigned int AnzNamen = 3;

    char **frients = (char **)malloc(AnzNamen * sizeof(char *));


    for (unsigned int i = 0; i < AnzNamen; i++)
    {
        // Max. 20 Zeichen pro Namen
        frients[i] = (char *)malloc(20 * sizeof(char));
    }


    // Ausgabe
    for (unsigned int k = 0; k < AnzNamen; k++)
    {
        printf("%s\n", frients[k]);
    }
    return 0;
}
