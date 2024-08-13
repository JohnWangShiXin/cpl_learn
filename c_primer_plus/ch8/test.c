#include <stdio.h>

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    int ch = getchar();

    printf("%d\n", ch == '\n');
    printf("%d\n", ch == ' ');

    return 0;
}