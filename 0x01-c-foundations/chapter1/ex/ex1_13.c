/*Exercise l-13. Write a program to print a histogram of the lengths of words in
* its input. It is easy to draw the histogram with the bars horizontal; a vertical
* orientation is more challenging.
*/
#include <stdio.h>

int main()
{
    int c, i, j, max_len;
    int len;
    int wl[20]; // Array to hold word lengths

    for (i = 0; i < 20; ++i)
        wl[i] = 0;

    len = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (len > 0 && len < 20)
                ++wl[len];
            len = 0;
        }
        else
        {
            ++len;
        }
    }

    max_len = 0;
    for (i = 1; i < 20; ++i)
        if (wl[i] > max_len)
            max_len = wl[i];

    for (i = max_len; i > 0; --i)
    {
        for (j = 1; j < 20; ++j)
        {
            if (wl[j] >= i)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }

    for (i = 1; i < 20; ++i)
        printf("%2d ", i);
    printf("\n");

    return 0;
}