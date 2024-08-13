#include <stdio.h>

void display(int ch, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            putchar(ch);
        putchar('\n');
    }
}

int main()
{
    int ch, row, col;

    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &row, &col) != 2)
        {
            break;
        }
        display(ch, row, col);

        while (getchar() != '\n')
            ;
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }

    printf("Bye\n");

    return 0;
}