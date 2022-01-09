# include <stdio.h>
# include <cs50.h>

int main()
{
    int height;
    //prompt the user for height untill the given condition is met
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    //printing adjacent pyramids of hash
    for (int i = 0; i < height; i++)
    {
        int width = (2 * height + 2);
        //printing spaces in right alighned pyramid
        for (int j = 0; j < width; j++)
        {
            printf("#");
        }
        printf("\n");       
                
    }
    
}