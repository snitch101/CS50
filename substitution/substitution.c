#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void rotated_string(string key, string text);

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("No");
        return 1;
    }
    if (strlen(argv[1]) != 26)
    {
        printf("No");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if(!isalpha(argv[1][i]))
        {
            printf("no");
            return 1;
        }
        for (int j = i + 1; j < strlen(argv[1]); j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("no");
                return 1;
            }
        }
    }

    string plaintext = get_string("Plaintext: ");

    rotated_string(argv[1], plaintext);
    return 0;
}

void rotated_string (string key, string text)
{
    printf("ciphertext: ");
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (int k = 0; k < strlen(text); k++)
    {
        if (isalpha(text[k]))
        {
            if (islower(text[k]))
            {
                for (int m = 0; m < strlen(alphabet); m++)
                {
                    if (text[k] == alphabet[m])
                    {
                        printf("%c", tolower(key[m]));
                    }
                }
            }
            if (isupper(text[k]))
            {
                for (int m = 0; m < strlen(alphabet); m++)
                {
                    if (text[k] == toupper(alphabet[m]))
                    {
                        printf("%c", toupper(key[m]));
                    }
                }
            }
        }
        else
        {
            printf("%c", text[k]);
        }
    }
    printf("\n");
}