#include <cs50.h>
#include <stdio.h>

// 25,10,5,1

int pennies(int change)
{
    int count = 0;
    count = count + change / 25;
    change = change % 25;
    count = count + change / 10;
    change = change % 10;
    count = count + change / 5;
    change = change % 5;
    count = count + change;
    printf("%d\n", count);
    return count;
}

int main()
{
    long bill;
    do
        bill = get_long("Enter the bill: ");
    while(bill<1);
    
    pennies(bill);
}
