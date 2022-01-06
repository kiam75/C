#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *join(char *delimiter, char **list)
{
    if (delimiter == NULL || list == NULL || list[0] == NULL)
    {
        return NULL;
    }

    size_t delimiter_len = strlen(delimiter);
    size_t current_input_len = strlen(list[0]);

    char *result = (char *)malloc(current_input_len * sizeof(char));

    if (result == NULL)
    {
        return NULL;
    }

    memset(result, 0, current_input_len);

    int i = 0;

    while (list[i] != NULL)
    {
        size_t current_result_len;
        if (i > 0)
        {
            current_result_len = strlen(result);
        }
        else
        {
            current_result_len = current_input_len;
        }

        current_input_len = strlen(list[i]);
        size_t new_result_len = current_input_len;
        if (i > 0)
        {
            new_result_len += delimiter_len;
            new_result_len += current_result_len;
        }

        if (new_result_len > current_result_len)
        {
            result = realloc(result, new_result_len + 1);
            current_result_len = new_result_len;
        }

        if (i > 0)
        {
            strncat(result, delimiter, current_result_len);
        }

        strncat(result, list[i], current_result_len);
        i++;
    }

    return result;
}

char *join_bugy(char *delimiter, char **list)
{
    size_t delimiter_len = strlen(delimiter);
    // Das ist das Kleinste (nur ein String) was man braucht
    size_t current_element_len = strlen(list[0]);

    if (delimiter == NULL || list == NULL || list[0] == NULL)
    {
        return NULL;
    }
    // Speicher für Resultat reservieren
    char *result = (char *)malloc(current_element_len * sizeof(char));
    // Wenn beim Reservieren etwas nicht geklappt hat
    if (result == NULL)
    {
        return NULL;
    }
    // Pointerarray einen einzigartigen Wert setzen--> Initialisieren
    //memset(name-des-arrays, default-zeichen('\0' ist int 0), größe der Pointer)
    memset(result, 0, current_element_len);

    int i = 0;
    while (list[i] != NULL)
    {
        size_t current_result_len;
        if (i > 0)
        {
            current_result_len = strlen(result);
        }
        // Erste Iteration (erster String)
        else
        {
            current_result_len = current_element_len;
        }

        current_element_len = strlen(list[i]);
        size_t new_result_len = current_element_len;
        // Nur wenn man in der nächten Iteration (es gibt ein nächstes Wort) ist
        // Dann Speicher für nächstes Wort berechen
        if (i > 0)
        {
            // Speicher für Delimiter dazurechnen
            new_result_len += delimiter_len;
            new_result_len += current_result_len;
        }
        // Ist noch genügend Speicher vorhanden?
        if (new_result_len > current_result_len)
        {
            result = realloc(result, new_result_len + 1);
            current_result_len = new_result_len;
        }

        //Nach der ganzen Speichervorbereitung, dann Strings aneinander hängen
        if (i > 0)
        {
            strncat(result, delimiter, current_result_len);
        }
        strncat(result, list[i], current_result_len);
        i++;
    }

    return result;
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
