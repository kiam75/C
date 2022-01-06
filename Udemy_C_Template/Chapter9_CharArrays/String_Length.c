#include <stdio.h>
<<<<<<< HEAD

int main()
{

=======
#include <stdlib.h>
#include <string.h>

size_t string_length(char *str)
{
    // Für den Fall, dass kein String (NULL) übergeben wurde
    if (NULL == str)
    {
        return 0;
    }
    // Länge initialisieren
    size_t i = 0;

    while (*str != '\0')
    {
        // Im Charaterarray eins weiter gehen
        str++;
        // Laenge um eins erhöhen
        i++;
    }

    return i;
}

int main()
{
    char name[32] = "Maik";
    char name2[32] = "Krause";

    printf("Name: %s\n", name);
    printf("Lastname: %s\n", name2);

    size_t name_length1 = string_length(name);
    size_t name_length2 = string_length(name2);

    printf("Länge Name: %lu\n", name_length1);
    printf("Länge Lastname: %lu\n", name_length2);
>>>>>>> 078c01bbb67db6b72084d6bf50ca474f63694e24

    return 0;
}
