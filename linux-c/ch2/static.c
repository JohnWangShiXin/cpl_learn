#include <stdio.h>

void func()
{
    static int cnt;

    printf("%d\n", cnt++);
    printf("address of cnt --> %p\n", &cnt);
}

int main()
{
    for(int i = 0; i < 3; ++i)
        func();

    return 0;
}