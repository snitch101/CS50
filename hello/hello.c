#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Asks the user for their name and prints out hello followed by their name
    string name = get_string("Enter your name: ");
    printf("Hello, %s\n", name);
}