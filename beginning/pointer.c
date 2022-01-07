#include <stdio.h>
/* Es gilt:

Ist a ein Array, so ist a zugleich ein Zeiger auf das erste Element des Arrays:
a = &a[0];

Wenn ein Zeiger (1) hinzuaddiert/subtrahiert wird, erhöht sich der Adresswert um
die Größe des Datentyps, auf den der Zeiger zeigt:
a + i = &a[i]

Auf den Zugriff auf ein Array ist somit gleichwertig:
a[i] und *(a + i)


*/

int main()
{

    int i = 5;
    int j = 6;
    int k = 8;

    int *intzeiger;

    char name[] = {'M', 'a', 'i', 'k', '\0'};
    char name2[] = "Nicole";
    char *charzeiger = name;
    char einkaufsliste[3][7] = {"Brot", "Milch", "Butter"};


    char vorname[21]; // 20 Zeichen + Terminator '\0'
    char nachname[21];
    char kuerzel[3];
    char adresse[100];

    //    char **namen = {"Maik", "Nicole", "Merlin", "Siri"};

    intzeiger = &i;
    printf("Wert von i:%d an Adressen: %p / %p.\n", i, &i, intzeiger);
    intzeiger = &j;
    printf("Wert von i:%d an Adresse: %p.\n", j, intzeiger);
    intzeiger = &k;
    printf("Wert von i:%d an Adresse: %p.\n", k, intzeiger);
    printf("Der Wert, auf den *charzeiger zeigt, ist %c an Adresse: %p.\n", *charzeiger, charzeiger);
    printf("Der Wert, auf den *charzeiger+1 zeigt, ist %c an Adresse: %p.\n", *(charzeiger + 1), charzeiger + 1);
    printf("Der Wert, auf den *charzeiger+2 zeigt, ist %c an Adresse: %p.\n", *(charzeiger + 2), charzeiger + 2);
    printf("Der Wert, auf den *charzeiger+3 zeigt, ist %c an Adresse: %p.\n", *(charzeiger + 3), charzeiger + 3);
    printf("Der Wert, auf den *charzeiger+4 zeigt, ist %c an Adresse: %p.\n", *(charzeiger + 4), charzeiger + 4);

    printf("=============================================================================\n");
    printf("ASCII Zeichen von 'a' = %d\n", 'a');
    printf("=============================================================================\n");
    printf("Bitte geben Sie einen Vornamen und Nachnamen (z.b. Maik Baumbach) ein: ");
    scanf("%s %s", vorname, nachname);
    fflush(stdin);
    kuerzel[0] = vorname[0];
    kuerzel[1] = nachname[0];
    kuerzel[2] = '\0';
    printf("Vorname: %s (char-array beginnt an Adresse: %p / %p \n Das Kürzel lautet %s \n",
           vorname,
           vorname[0],
           *vorname,
           kuerzel);
    //   printf("Wert von namen:%s an Adresse: %p.\n", *namen, namen);
    return 0;
}
