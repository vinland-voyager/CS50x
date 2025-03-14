#include <cs50.h>
#include <stdio.h>

int main()
{
    string userSname = get_string("What's your name? ");
    printf("hello, %s\n", userSname);
}
