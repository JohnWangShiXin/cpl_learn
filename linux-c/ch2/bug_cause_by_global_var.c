#include <stdio.h>

int i = 0;

void print_star()
{
    for(i = 0; i < 5; ++i)
        printf("*");
    printf("\n");
    //global i = 5
}

int main()
{
    for(i = 0; i < 5; ++i)
        print_star();

    return 0;
}