/*Exercise 1-21. Write a program entab that replaces strings of blanks by the
minimum number of tabs and blanks to achieve the same spacing. Use the
same tab stops as for detab. When either a tab or a single blank would suffice
to reach a tab stop, which should be given preference?*/

#include <stdio.h>
#define TABS 4

int main()
{
    int c, i, spaces;
    spaces = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            // Flush any pending spaces before the newline
            for (i = 0; i < spaces / TABS; i++)
                putchar('\t');
            for (i = 0; i < spaces % TABS; i++)
                putchar(' ');

            spaces = 0;
            putchar(c);
        }
        else if (c == ' ')
        {
            ++spaces;
        }
        else
        {

            for (i = 0; i < spaces / TABS; i++)
            {
                putchar('\t');
            }

            for (i = 0; i < spaces % TABS; i++)
            {
                putchar(' ');
            }
            spaces = 0;
            putchar(c);
        }
    }

    // At EOF: flush any remaining spaces
    for (i = 0; i < spaces / TABS; i++)
        putchar('\t');
    for (i = 0; i < spaces % TABS; i++)
        putchar(' ');
}