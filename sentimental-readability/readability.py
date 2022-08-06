from cs50 import get_string

def main():

    # get a string text from the user
    text = get_string("Text: ")

    #compute the number of letters, words and sentences in the text
    letters = count_letters(text)
    words = count_words(text)
    sentences = count_sentences(text)

    # calculate the S and L averages for the index
    L = letters / words * 100
    S = sentences/ words * 100

    #calculate and round off the index
    index = round(0.0588 * L - 0.296 * S - 15.8)

    #check index returned and print out correct results
    if index > 16:
        print("Grade 16+")
    elif index > 1:
        print(f"Grade {index}")
    else:
        print("Before Grade 1")

#counts the letters found in the text
def count_letters(text):
    letters = 0
    for i in range(len(text)):
        if text[i].isalpha():
            letters += 1
    return letters

#counts the words found in the text
def count_words(text):
    words = 0
    for i in range(len(text)):
        if text[i].isspace():
            words += 1
    return words + 1

#counts the sentences found in the text
def count_sentences(text):
    sentences = 0
    for i in range(len(text)):
        if text[i] == "." or text[i] == "?" or text[i] == "!":
            sentences += 1
    return sentences

#calls main
if __name__ == "__main__":
    main()