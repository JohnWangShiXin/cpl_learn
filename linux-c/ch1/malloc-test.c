#include<stdio.h>
int main()
{
	int* p = NULL;
	p = (int*)maloc(sizeof(int));
	
	if(p == NULL)
		return -1;

	return 0;
}
