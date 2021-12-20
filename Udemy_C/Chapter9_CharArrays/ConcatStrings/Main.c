#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t string_length(char *str)
{
    if (NULL == str)
    {
        return 0;
    }

    size_t i = 0;

    while (*str != '\0')
    {
        str++;
        i++;
    }

    return i;
}

int strings_equal(char *str1, char *str2)
{
    if (NULL == str1 || NULL == str2)
    {
        return 0;
    }

    while ((*str1 != '\0') && (*str2 != '\0'))
    {
        if (*str1 != *str2)
        {
            return 0;
        }

        str1++;
        str2++;
    }

    if ((*str1 != '\0') || (*str2 != '\0'))
    {
        return 0;
    }

    return 1;
}

char *concatenate(char *dst, char *src, size_t n)
{
    if (dst == NULL)
    {
        return NULL;
    }

    if (src == NULL || n == 0)
    {
        return dst;
    }

    size_t dst_len = strlen(dst);
    dst += dst_len;

    size_t i = 0;
    while ((*src != '\0') && (i < n - 1))
    {
        *dst = *src;
        dst++;
        src++;

        i++;
    }

    *dst = '\0';

    return dst;
}

int main()
{
    char name[32] = "Jan";
    char lastname[16] = "Schaffranek";

    printf("name: %s\n", name);
    printf("lastname: %s\n", lastname);

    size_t name_length0 = string_length(name);
    size_t name_length1 = strlen(name);

    size_t lastname_length0 = string_length(lastname);
    size_t lastname_length1 = strlen(lastname);

    printf("Name Length 0: %lu, 1: %lu\n", name_length0, name_length1);
    printf("Last Name Length 0: %lu, 1: %lu\n", lastname_length0, lastname_length1);

    int equal1 = strings_equal(name, lastname);
    int equal2 = strings_equal(name, name);
    int equal3 = strings_equal(lastname, lastname);

    printf("Name == Lastname = %d\n", equal1);
    printf("Name == Name  = %d\n", equal2);
    printf("Lastname == Lastname = %d\n", equal3);

    char test[] = "Ja";
    int equal4 = strings_equal(name, test);
    printf("Name == test = %d\n", equal4);

    concatenate(name, " ", 2);
    concatenate(name, lastname, 16);
    printf("Name + Lastname: %s\n", name);

    return 0;
}
