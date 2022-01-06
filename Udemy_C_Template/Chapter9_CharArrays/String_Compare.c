#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strings_eqaul(char *str1, char *str2)
{
    // Für den Fall, dass kein String (NULL) übergeben wurde
    if (NULL == str1 || NULL == str2)
    {
        return 0; // False
    }

    while ((*str1 != '\0') && (*str2 != '\0'))
    {
        if (*str1 != *str2)
        {
            return 0;
        }
        // Positionen um ein Zeichen verschieben
        str1++;
        str2++;
    }
    // Für den Fall, dass einer der beiden Strings kürzer (\0) ist.
    if ((*str1 != '\0') || (*str2 != '\0'))
    {
        return 0; // False
    }


    return 1; // True
}

int main()
{
    char name[32] = "Maik";
    char name2[32] = "Krause";
    char name3[32] = "Krause";

    printf("Name: %s\n", name);
    printf("Lastname: %s\n", name2);

    int name_is_equal = strings_eqaul(name, name2);
    int name_is_equal2 = strings_eqaul(name2, name2);

    printf("Namen sind (1 = gleich, 0 = ungleich): %d\n", name_is_equal);
    printf("Namen, %s, %s sind (1 = gleich, 0 = ungleich): %d\n", name2, name3, name_is_equal2);

    return 0;
}
