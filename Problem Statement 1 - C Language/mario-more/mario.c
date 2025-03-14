#include <cs50.h>
#include <stdio.h>

int main()
{
    int height, test = 1;
    do
    {
        height = get_int("Enter height: ");
        if (height >= 1 && height <= 8)
            test = 0;
    }
    while (test);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
