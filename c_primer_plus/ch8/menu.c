#include <stdio.h>

int get_first()
{
    int ch = getchar();

    while (getchar() != '\n')
        ;

    return ch;
}

int get_choice()
{
    int ch;

    printf("Enter your choice:\n");
    printf("a.advice\tb.bell\nc.count\tq.quit\n");

    ch = get_first();

    while (((ch < 'a' || ch > 'c') && ch != 'q'))
    {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }

    return ch;
}

long get_long()
{
    long input;
    int ch;

    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an integer.\n");
        printf("please enter an integer value like 99,88.\n");
    }

    return input;
}

void count()
{
    long n = 0;

    printf("Count how far? Enter an integer:\n");
    n = get_long();

    while (n <= 0)
    {
        printf("The value of count is %ld.\nPlease enter an value is greater than 0\n", n);

        printf("Count how far? Enter an integer:\n");
        n = get_long();
    }

    for (long i = 0; i < n; ++i)
        printf("%ld\n", i + 1);
    
    while(getchar() != '\n');
}

int main()
{
    int ch;

    while ((ch = get_choice()) != 'q')
    {
        printf("ch = %d\n", ch);
        switch (ch)
        {
        case 'a':
            printf("Buy low, sell high.\n");
            break;
        case 'b':
            putchar('\a');
            break;
        case 'c':
            count();
            break;
        default:
            printf("Program error!\n");
            break;
        }
    }
    printf("Bye.\n");
    return 0;
}