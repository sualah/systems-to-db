/* Exercise 1-8. Write a program to count blanks, tabs, and newlines */
#include <stdio.h>

int main()
{
    int c, nb, nt, nl = 0;

    nb = nt = nl = 0;

    while((c = getchar()) != EOF)    
    {
        if(c == ' ') ++nb;
        if(c == '\t') ++nt;
        if(c == '\n') ++nl;
    }

    printf("blanks: %d, tabs: %d, newlines: %d\n", nb, nt, nl);
    return 0;
}