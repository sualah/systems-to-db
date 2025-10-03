/* Exercise 1-22. Write a program to "fold" long input lines into two or more
shorter lines after the last non-blank character that occurs before the n-th
column of input. Make sure your program does something intelligent with very
long lines, and if there are no blanks or tabs before the specified column.*/

#include <stdio.h>
#define MAXLINE 1000
#define FOLDLEN 40 // Column at which to fold lines
int _getline(char line[], int maxline);
void fold(char line[], int len);

int main()
{
    int len;            // Current line length
    char line[MAXLINE]; // Current input line
    while ((len = _getline(line, MAXLINE)) > 0)
    {
        fold(line, len);
    }
    return 0;
}
// getline: read a line into s, return length
int _getline(char s[], int lim)
{
    int c, i; // i is the index for s[]
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
// fold: fold long lines into shorter lines at the last blank before FOLDLEN
void fold(char s[], int len)
{
    int col = 0; // current column
    int last_blank = -1;
    int i;
    for (i = 0; i < len; i++)
    {
        putchar(s[i]);
        col++;

        if (s[i] == ' ' || s[i] == '\t')
            last_blank = col; // remember where blank occurred

        if (col >= FOLDLEN)
        {
            if (last_blank != -1)
            {
                putchar('\n'); // break at blank
                col = 0;
                last_blank = -1;
            }
            else
            {
                putchar('\n'); // force break in middle of word
                col = 0;
            }
        }

        if (s[i] == '\n')
        { // reset on explicit newlines
            col = 0;
            last_blank = -1;
        }
    }
}
