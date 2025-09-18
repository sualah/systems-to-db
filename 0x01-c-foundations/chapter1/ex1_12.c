/* Exercise 1-12. Write a program that prints its input one word per line.*/
#include <stdio.h>
#define IN 1  // Inside a word
#define OUT 0 // Outside a word

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }
}