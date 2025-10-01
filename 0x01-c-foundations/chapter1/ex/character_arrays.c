/*write a
program that reads a set of text lines and prints the longest.
*/
#include <stdio.h>
#define MAXLINE 1000 // Maximum input line size 
//#define MAXLEN 100   // Maximum length of a line to be considered
int getline(char line[], int maxline);
void copy(char to[], char from[]);
int main()
{
    int len;                // Current line length
    int max;                // Maximum length seen so far
    char line[MAXLINE];     // Current input line
    char longest[MAXLINE];   // Longest line saved here

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0) // There was a line
        printf("Longest line: %s", longest);
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
// copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
