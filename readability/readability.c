#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string word);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    //Stores the number of letters, words and sentences
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    //Calculates the index value
    double L = (double)letters / words * 100;
    double S = (double)sentences / words * 100;

    double index = 0.0588 * L - 0.296 * S - 15.8;

    //Rounds index to nearest integer
    int index_rounded = round(index);

    // Prints the grade based on the index value
    if (index_rounded >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index_rounded > 1)
    {
        printf("Grade %i\n", index_rounded);
    }
    else
    {
        printf("Before Grade 1\n");
    }

}

// Counts number of letters
int count_letters(string text)
{
    // Variable storing the letter count
    int letters = 0;

    //Checks that a character is a letter before counting
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

//Counts number of words
int count_words(string text)
{
    //variable storing the word count
    int words = 0;

    //counts number of spaces to find number of words
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }
    return words + 1;
}

//Counts number of sentences
int count_sentences(string text)
{
    // variable storing the sentence count
    int sentences = 0;

    //counts number of sentence ending punctuation
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    return sentences;
}