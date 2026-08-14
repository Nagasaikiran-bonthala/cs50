#include <stdio.h>
#include <stdbool.h>
#include "input.h"

int main(void)
{
    int n;

    while(true)
    {
        n = get_int("Number Please:? ");
        if(n < 0)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    for (int i=0; i < n ; i++)
    {
        printf("Hello %i\n",i);
    }
}

