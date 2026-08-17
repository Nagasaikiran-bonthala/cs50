#include <stdio.h>
#include "input.h"

int main(void)
{
    int x = get_int("what's x?: ");
    int y = get_int("what's y?: ");

    int sum = x + y;

    printf("%i\n", sum);
}