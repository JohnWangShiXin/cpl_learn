#include <stdio.h>
#include "proj.h"

int i = 1;

int main()
{
    printf("[%s]:i = %d\n", __FUNCTION__, i);
    func();

    return 0;
}