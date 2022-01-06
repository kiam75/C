#include <stdio.h>

int main()
{

    int i = 5;
    int j = 6;
    int k = 8;

    int *intzeiger;

    char name[] = {'M', 'a', 'i', 'k', '\0'};
    char *charzeiger = name;

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
    //   printf("Wert von namen:%s an Adresse: %p.\n", *namen, namen);
    return 0;
}
