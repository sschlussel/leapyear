#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Welcome to the Leap year calculator\n");
    int year;

    do
    {
        printf("Please insert a year\n");
        printf("Year: ");
        year = get_int();
    }
    while (year <= 0);

    if(year%4 == 0)
    {
        printf("This is a leap year!\n\n");
        return 0;
    }
    else
    {
        printf("Sorry this is not a leap year!\n\n");
        return 1;
    }
}