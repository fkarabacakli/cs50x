#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string word = get_string ("Before: ");
    printf("After:");
    for(int i=0 , n=strlen(word); i<n; i++)
    { 
    printf("%c", toupper(word[i]));
    }
    printf("\n");
}