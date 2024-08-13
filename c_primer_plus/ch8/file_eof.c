#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;
    char* filename;
    printf("Enter the file name:");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("Failed to open file:%s", filename);
        exit(1);
    }

    int ch;
    while((ch = getc(fp)) != EOF)
        putchar(ch);

    fclose(fp);

    exit(0);

    return 0;
}