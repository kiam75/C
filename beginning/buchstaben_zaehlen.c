#include <stdio.h>

int main()
{
    // Array buf dient zum Einlesen der zur Verarbeitung anstehenden Zeichenketten
    // Array count zur Aufnahme der Buchstabenzähler
    unsigned char buf[80];
    int count[26];
    int i, k, anz;

    // Alle Buchstabenzaehler auf 0 setzten
    for (i = 0; i < 26; i++)
    {
        count[i] = 0;
    }

    printf("Anzahl Wörter: ");
    scanf("%d", &anz);

    for (k = 1; k <= anz; k++)
    {
        printf("%d. Wort (NUR kleinbuchstaben): ", k);
        scanf("%s", buf);

        for (i = 0; buf[i] != '\0'; i++)
        {
            printf("\n Wert von buf[%d] = %c. \n buf[%d](%d) - 'a'(%d)\n", i, buf[i], i, buf[i], 'a');
            count[buf[i] - 'a']++;
        }
    }

    printf("\n Auswertung: \n");
    for (i = 0; i <= 'z' - 'a'; i++)
    {
        printf("%c: %d\n", 'a' + i, count[i]);
    }
}
