#include <cs50.h>
#include <stdio.h>

//prints out a right-aligned mario pyramid
int main(void)
{
    int height;
    //asks for integer between 1 and 8 from user
    do
    {
        height = get_int("Enter height between 1 and 8 inclusive: ");
    } while (height < 1 || height > 8);

    //creates a column
    for(int i = 0; i < height; i++)
        {
            //creates spaces to right align the pyramid
            for (int j = 0; j < height - i - 1; j++)
            {
                printf(" ");
            }
            //creates # for the actual pyramid
            for (int k = 0; k < i + 1; k++)
            {
                printf("#");
            }
            printf("\n");
        }
}