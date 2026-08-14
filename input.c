#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"

char *get_string(const char *prompt)
{
    printf("%s", prompt);

    char buffer[1024];

    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        return NULL;
    }

    buffer[strcspn(buffer, "\n")] = '\0';

    char *result = malloc(strlen(buffer) + 1);

    if (result == NULL)
    {
        return NULL;
    }

    strcpy(result, buffer);

    return result;
}


char get_char(const char *prompt)
{
    printf("%s", prompt);

    char buffer[1024];

    while (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        if (buffer[0] != '\n' && buffer[0] != '\0')
        {
            return buffer[0];
        }

        printf("%s", prompt);
    }

    return '\0';
}


int get_int(const char *prompt)
{
    printf("%s", prompt);

    int value;

    while (scanf("%d", &value) != 1)
    {
        while (getchar() != '\n');

        printf("Invalid input. %s", prompt);
    }

    while (getchar() != '\n');

    return value;
}


long get_long(const char *prompt)
{
    printf("%s", prompt);

    long value;

    while (scanf("%ld", &value) != 1)
    {
        while (getchar() != '\n');

        printf("Invalid input. %s", prompt);
    }

    while (getchar() != '\n');

    return value;
}


long long get_long_long(const char *prompt)
{
    printf("%s", prompt);

    long long value;

    while (scanf("%lld", &value) != 1)
    {
        while (getchar() != '\n');

        printf("Invalid input. %s", prompt);
    }

    while (getchar() != '\n');

    return value;
}


float get_float(const char *prompt)
{
    printf("%s", prompt);

    float value;

    while (scanf("%f", &value) != 1)
    {
        while (getchar() != '\n');

        printf("Invalid input. %s", prompt);
    }

    while (getchar() != '\n');

    return value;
}


double get_double(const char *prompt)
{
    printf("%s", prompt);

    double value;

    while (scanf("%lf", &value) != 1)
    {
        while (getchar() != '\n');

        printf("Invalid input. %s", prompt);
    }

    while (getchar() != '\n');

    return value;
}