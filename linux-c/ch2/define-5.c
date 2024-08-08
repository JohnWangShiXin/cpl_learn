#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int i = 5, j = 3;

    printf("i = %d\tj = %d\n", i, j);
    printf("%d\n", MAX(i++, j++));
    printf("i = %d\tj = %d\n", i, j);

    return 0;
}