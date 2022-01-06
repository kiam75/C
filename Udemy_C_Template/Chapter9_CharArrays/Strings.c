#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Das Nul-Terminierungszeichen \0 wird implizit bei einem String/Character Feld angefügt.
    // Im Beispiel wurde das explizit gemacht, um die Indizierung zu verdeutlichen length + 1
    // 3 Arten einen String zu initialisieren
    char name1[] = {'M', 'a', 'i', 'k', '\0'};
    char name2[5] = {'M', 'a', 'i', 'k', '\0'};
    char name3[] = "Maik";

    // Wenn zukünftige Länge des Strings noch nicht bekannt ist, nimmt man
    // initial erst einmal mehr als man brauchen würde. Hier z.B. 32 Zeichen
    // Length Fkt schaut dann nach dem Nul-Terminator
    char name4[32] = {'\0'};

    char *name5 = (char *)malloc(32 * sizeof(char));
    name5[0] = 'M';
    name5[1] = 'a';
    name5[2] = 'i';
    name5[3] = 'k';
    name5[4] = '\0';

    // Ausgabe
    for (int i; i < 5; i++)
    {
        printf("%c", name5[i]);
    }
    printf("\n");

    // Ausgabe geht auch ohne For-Schleife (Längenangabe)
    printf("%s\n", name1);


    free(name5);
    name5 = NULL;

    return 0;
}
