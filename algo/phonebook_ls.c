#include <stdio.h>
#include <string.h>
#include "input.h"

int main(void)
{
    string names[] = {"Kelly", "David", "John"};
    string numbers[] = {"+1-617-495-1999", "+1-617-495-1999", "+1-617-495-2750"};

    string name = get_string("Name: ");

    for (int i =0; i<3; i++)
    {
        if(strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}