/*#include<stdio.h>

int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]);
    }
}*/
/*#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    printf("a is %i, b is %i\n", *a, *b);
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("a is %i, b is %i\n", *a, *b);
}*/
/*#include <stdio.h>

int main(void)
{
    char *s;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}*///But we haven’t actually allocated any memory for s, so we need to call malloc to allocate memory for 
//characters for our string. We could also use char s[4]; to declare an array of four characters. 
//Then, s will be treated as a pointer to the first character in scanf and printf. and the correct way is below
#include <stdio.h>

int main(void)
{
    char s[4]; // if using stack char s[4]; no need to use free it automatically managed for us ,
    //or char *s = malloc(4); if we use malloc we have to use free 
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}