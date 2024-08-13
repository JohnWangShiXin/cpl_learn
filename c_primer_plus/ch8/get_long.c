#include <stdio.h>


long get_long()
{
    long input;
    int ch;

    while(scanf("%ld", &input) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an integer.\n");
        printf("please enter an integer value like 99,88.\n");
    }

    return input;
}

int main()
{

    long l = get_long();
    printf("%ld", l);
    return 0;
}