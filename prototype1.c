#include <stdio.h>
#include "input.h"

void hello(int n); // giving hit to the compiler that hello program is available as  hello function not available before calling it in main it will throw error

int main(void)
{
    
    hello(3);

}

void hello(int n)
{
    for (int i = 0;i < n; i++ )
    {
        printf("Hello\n");

    }
    
}