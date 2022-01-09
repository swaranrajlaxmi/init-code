#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main(void)
{
 /*   int n = 50;
   // int *p = &n;
    printf("%p\n", &n);
   // printf("%i\n", *p);
    string s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    */
   /* char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%i\n", *(s+3));
    */
   /* int i = get_int("i: ");
    int j = get_int("j: ");
    
    if(i == j)
    {
     printf("same\n");
    }
    else
    {
     printf("different\n");
    }
    */
    
   /* char *s = get_string("s: ");
    char *t = get_string("t: ");
    
    if(strcmp(s, t) == 0)//string compare return value 0 if they are same, 
    //a negative number if ones comes before the other and a positive number if one comes after the other
    {
     printf("same\n");
    }
    else
    {
     printf("different\n");
    }
    */
   /* char *s = get_string("s: ");
    char *t = s; // it is copying s and s contains the address of variable. so, if t changes s also changes 
    //because both having same addres and both pointing towards same address. this is the wrong way to copy
    //a string.
    t[0] = toupper(t[0]);
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    */
    // correct way to copy a string is to give some additional memory by new new function malloc.
    char *s = get_string("s: ");
    char *t = malloc(strlen(s) + 1);//if your program is so big and malloc needs lots of memory ,we should
    //make sure that t actually has a valid address and full copy of variable, we need error checking 
    
    if(t == NULL)//NULL represents the null pointer, it is a bogus address, technically,its address 0
    //it is differrent from backslash 0 , as an NUL or nul in the context of characters.
    {
     return 1;
    }
    
   /* for(int i = 0, n = strlen(s); i <= n; i++)
    {
     t[i] = s[i];
    }*///copy this way
                //OR simply 
     strcpy(t, s);           
                
                
    //if input is nothing then for error checking, stringlength of t should be atleast > 0 then go for uppercase
    if(strlen(t) > 0)
    {
     t[0] = toupper(t[0]);
    }
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    
    //after you have done with memory you took with malloc, all you have to do tell free via its input what 
    //address was that malloc gave you.then computer won't get run out of memory ,it can now reuse that space
    //for something else. we need to free memory, anytime we use malloc henceforth, we must use free.
    
    free(t);
}