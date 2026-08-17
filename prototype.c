#include <stdio.h>
#include "input.h"

void hello(void); // giving hit to the compiler that hello program is available as  hello function not available before calling it in main it will throw error

int main(void)
{
    for (int i = 0;i = 3; i++ )
    hello();

}

void hello(void)
{
    printf("Hello\n");
}