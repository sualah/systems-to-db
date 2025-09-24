/*Exercise 1-17. Write a program to print all input lines that are longer than 80
characters.*/

#include <stdio.h>
#define MAXLINE 1000


int main()
{
    int c, i;
    int len;
  
    char line[MAXLINE];

    while ((c = getchar()) != EOF)
    {
        len = 0;
        for (i = 0; i < MAXLINE - 1 && c != EOF && c != '\n'; ++i)
        {
            line[i] = c;
            ++len;
            c = getchar();
        }
        if (c == '\n')
        {
            line[i] = c;
            ++len;
            ++i;
        }
        line[i] = '\0';

        if (len > 80)
            printf("%s", line);
    }

    return 0;
}