#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)

int main()
{
    __FUNCTION__;
    int i = 5, j = 3;
    // printf("%d\n", MAX(i, j));
    printf("%d\n", MAX(i, j * 2));

    return 0;
}