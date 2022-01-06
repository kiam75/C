#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *join(char *delimiter, char **list)
{
    size_t delimiter_len = strlen(delimiter);
    // Das ist das Kleinste (nur ein String) was man braucht
    size_t current_element_len = strlen(*list);
    //alternative
    //size_t current_element_len = strlen(list[0]);

    char *str = NULL;

    if (delimiter == NULL || list == NULL || *list = NULL)
    {
        return str;
    }

    // Speicher für Resultat reservieren
    char *result = (char *)malloc(current_element_len * sizeof(char));

    int i = 0;
    while (*list + i != NULL)
    {
        str = *list;
        str = delimiter;
    }

    //Alternative
    /*
    while(list[i] != NULL){

    }
    */
}

int main()
{
    char *list1[] = {NULL};
    char *list2[] = {"Clara", NULL};
    char *list3[] = {"Clara", "Florian", NULL};
    char *list4[] = {"Clara", "Florian", "Jan", NULL};
    char *s = NULL;

    s = join(" -> ", list1); // ""
    if (s != NULL)
    {
        printf("List1: %s\n", s);
        free(s);
    }

    s = join(" -> ", list2); // "Clara"
    if (s != NULL)
    {
        printf("List2: %s\n", s);
        free(s);
    }

    s = join(" -> ", list3); // "Clara -> Florian"
    if (s != NULL)
    {
        printf("List3: %s\n", s);
        free(s);
    }

    s = join(" -> ", list4); // "Clara -> Florian -> Jan"
    if (s != NULL)
    {
        printf("List4: %s\n", s);
        free(s);
    }

    return 0;
}
