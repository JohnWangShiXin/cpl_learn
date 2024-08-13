#include <stdio.h>

int main()
{
    int guess = 1;

    printf("Is %d\n", guess);
    //缓冲输入导致的问题
    // while(getchar() != 'y')
    //     printf("Is %d\n", ++guess);
    while(getchar() != 'y')
    {
        printf("Is %d\n", ++guess);
        while(getchar() != '\n');
    }
    printf("Good!");

    return 0;
}