#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strings_concate(char *dest, char *src, size_t n)
{
    // Für den Fall, dass kein String (NULL) übergeben wurde
    if (dest == NULL)
    {
        return NULL;
    }

    // Wenn nicht angehangen wird
    if (src == NULL || n == 0)
    {
        return dest;
    }

    // Länge des Zielstings, an den angehangen werden soll bestimmen
    size_t dest_len = strlen(dest);
    // Den Pointer auf das Ende (\0) rücken
    dest += dest_len;

    size_t i = 0;

    while ((*src != '\0') && (i < n - 1))
    {
        *dest = *src;
        // Positionen um ein Zeichen verschieben
        dest++;
        src++;

        i++;
    }

    // Noch die Zeichenterminierung anfügen
    *dest = '\0';

    return dest; // True
}

int main()
{
    char name[32] = "Maik";
    char name2[10] = "Krause";

    printf("Name: %s\n", name);
    printf("Lastname: %s\n", name2);

    strings_concate(name, name2, 10);
    printf("Namen zusammen, %s \n", name);

    return 0;
}
