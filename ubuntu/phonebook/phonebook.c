#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");//fopen is a new function we can use to open a file.
    //(r for read, w for write, and a for append, or adding to).
    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);//we can use fprintf to print to a file.


    fclose(file);//we close the file with fclose.
}