#include <stdio.h>

int main()
{
    register int i = 0;

    // printf("%p\n", &i); //address of register variable ‘i’ requested

    printf("%d\n", i);

    return 0;
}