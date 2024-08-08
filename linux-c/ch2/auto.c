#include <stdio.h>

void func()
{
    int i = 0;
    

    printf("%d\n", i++);
    printf("address of i --> %p\n", &i);
}

int main()
{
    // int i;

    // printf("%d\n", i);    

    for(int i = 0; i < 3; ++i)
        func();

    return 0;
}