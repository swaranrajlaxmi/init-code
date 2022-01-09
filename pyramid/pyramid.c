#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

/*void draw(int h) // iterative version
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}*/
void draw(int h) // recursive version
{
    if (h == 0)
    {
        return;
    }

    draw(h - 1);
    printf("%i\n", h);

    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}