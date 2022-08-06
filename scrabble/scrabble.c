#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Decides the winner based on the higher score
    if (score1 > score2)
    {
        printf("Player 1 wins! \n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins! \n");
    }
    else
    {
        printf("Tie! \n");
    }
}

int compute_score(string word)
{
    // Variable to hold the points earned by each letter
    int point = 0;

    // Looping through each letter of the word
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // Converting every letter to lowercase
        char letter = tolower(word[i]);

        // Deciding on the points based on the letter
        switch (letter)
        {
            case 'a':
                point += POINTS[0];
                break;
            case 'b':
                point += POINTS[1];
                break;
            case 'c':
                point += POINTS[2];
                break;
            case 'd':
                point += POINTS[3];
                break;
            case 'e':
                point += POINTS[4];
                break;
            case 'f':
                point += POINTS[5];
                break;
            case 'g':
                point += POINTS[6];
                break;
            case 'h':
                point += POINTS[7];
                break;
            case 'i':
                point += POINTS[8];
                break;
            case 'j':
                point += POINTS[9];
                break;
            case 'k':
                point += POINTS[10];
                break;
            case 'l':
                point += POINTS[11];
                break;
            case 'm':
                point += POINTS[12];
                break;
            case 'n':
                point += POINTS[13];
                break;
            case 'o':
                point += POINTS[14];
                break;
            case 'p':
                point += POINTS[15];
                break;
            case 'q':
                point += POINTS[16];
                break;
            case 'r':
                point += POINTS[17];
                break;
            case 's':
                point += POINTS[18];
                break;
            case 't':
                point += POINTS[19];
                break;
            case 'u':
                point += POINTS[20];
                break;
            case 'v':
                point += POINTS[21];
                break;
            case 'w':
                point += POINTS[22];
                break;
            case 'x':
                point += POINTS[23];
                break;
            case 'y':
                point += POINTS[24];
                break;
            case 'z':
                point += POINTS[25];
                break;
            default:
                point += 0;
                break;
        }
    }

    return point;
}
