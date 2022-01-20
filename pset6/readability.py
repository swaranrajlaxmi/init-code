import importlib


# prompt user for text
text = input("Text: ")
TextLength = len(text)
# initialise parameters
sentences =letters = 0
words = 1
# count for letters, words, and sentences in the text
for i in range(TextLength):
    if (text[i].isalpha()):
        letters += 1
    elif (text[i].isspace()):
        words += 1
    elif (text[i] == "." or text[i] == "?" or text[i] == "!"):
        sentences += 1
print(letters)
print(words)
print(sentences)
# calculate coleman liau index
index = round(0.0588 * ((letters * 100) / (float) words) - 0.296 * ((sentences * 100) / (float)words) - 15.8);




