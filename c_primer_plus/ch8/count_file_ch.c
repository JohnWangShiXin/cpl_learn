#include <stdio.h>

int main()
{
    int ch;
    long cnt = 0;

    while((ch = getchar()) != EOF)
        cnt++;

    printf("cnt = %ld\n", cnt);
    return 0;
}