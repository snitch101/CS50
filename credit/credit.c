#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card;
    do
    {
    card = get_long("Enter card number:\n");
    } while (!card);

    for (int i = 10; i > )
        int mod = (card / 10) % 10;
    printf("%i", mod);
}