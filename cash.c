#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);
    
    int cents = round(dollars * 100);
    int coins = 0;
    
    
    int cointype[] = {25, 10, 5, 1};
    
    
    int size = sizeof(cointype) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        coins += cents / cointype[i];
        cents %= cointype[i];
    }
    printf("%i\n", coins);
}