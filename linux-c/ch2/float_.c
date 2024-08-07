#include <math.h>

int compare(float f)
{
    if(f < 0)
        return -1;
    else if(fabs(f) < 1e-6)
        return 0;
    else
        return 1;
}