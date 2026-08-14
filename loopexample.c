#include <stdio.h>
#include "input.h"

int main(void)
{
    int n = 0;
    while (n <= 0)
    {
        n = get_int("Number Please:? ");
    }
    for (int i=0; i<n; i++)
    {
        printf("Hello %i\n",i);
    }
}

