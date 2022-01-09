# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

int main(int argc, string argv[])
{
    //check for single command line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //check arguments to make sure all characters are digits
    for (int i = 0, n = strlen(argv[1]); i < n;)
    {
        if (isdigit(argv[1][i]))
        {
            i++;
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        
    }
    //TODO: Convert the command-line argument from a string to an int
    int k = atoi(argv[1]);
    //TODO: get user text
    string text = get_string("plaintext:  ");
    //TODO: print cipher text
    printf("ciphertext: ");
   
    
    //TODO: Iterate over each character of the plaintext

    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        //TODO: If it is an uppercase letter, rotate it, then print 
        if (isupper(text[i]))
        {
            text[i] = ((text[i] - 65) + k) % 26 + 65;
            printf("%c", text[i]);
        }
        //TODO: If it is a lowercase letter, rotate it, then print 
        else if (islower(text[i]))
        {
            text[i] = ((text[i] - 97) + k) % 26 + 97;
            printf("%c", text[i]);
        }
        //TODO: If it is neither, print out the character as is
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}