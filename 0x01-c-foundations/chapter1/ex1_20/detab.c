/*Exercise 1-20. Write a program detab that replaces tabs in the input with the
proper number of blanks to space to the next tab stop. Assume a fixed set of
tab stops, say every n columns. Should n be a variable or a symbolic parame-
ter?*/

#include <stdio.h>
#define TABS 4
int main()
{
    int c, i, column, spaces;
    column = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            column = 0;
            putchar(c);
        }
        else if (c == '\t')
        {
            spaces = TABS - (column % TABS);
            for (i = 0; i < spaces; i++)
            {
                putchar(' ');
            }
            column += spaces;
        }
        else
        {
            ++column;
            putchar(c);
        }
    }
}