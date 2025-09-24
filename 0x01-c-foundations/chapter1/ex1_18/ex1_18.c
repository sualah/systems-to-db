/*Exercise 1-18. Write a program to remove trailing blanks and tabs from each
line of input, and to delete entirely blank lines.*/

#include <stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void trim(char line[]);
int main()
{
    int len;                // Current line length
    char line[MAXLINE];     // Current input line
    while ((len = getline(line, MAXLINE)) > 0)
    {
        trim(line);
        if (line[0] != '\0') // Only print non-blank lines
            printf("%s", line);
    }
    return 0;
}
// getline: read a line into s, return length
int getline(char s[], int lim)
{
    int c, i;         // i is the index for s[]
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
// trim: remove trailing blanks and tabs from line
void trim(char s[])
{
    int i;
    // Find the end of the string
    for (i = 0; s[i] != '\0'; ++i)
        ;
    // Move backwards to find the last non-blank character
    while (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'))
        --i;
    s[i] = '\0'; // Null-terminate the string
}
