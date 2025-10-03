/*
Exercise 1-23. Write a program to remove all comments from a C program.
Don't forget to handle quoted strings and character constants properly. C com-
ments do not nest.
*/
#include <stdio.h>
#define MAXLINE 1000
int _getline(char line[], int maxline);
void remove_comments(char line[], int len);
int main()
{
    int len;            // Current line length
    char line[MAXLINE]; // Current input line
    while ((len = _getline(line, MAXLINE)) > 0)
    {   
        remove_comments(line, len);
        printf("%s", line);
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
// remove_comments: remove comments from line
void remove_comments(char s[], int len)
{
    int i, j;
    int in_comment = 0; // Flag to indicate if we are inside a comment
    for (i = 0, j = 0; i < len; i++)
    {
        if (in_comment)
        {
            if (s[i] == '*' && s[i + 1] == '/')
            {
                in_comment = 0;
                i++; // Skip the '/' character
            }
        }        
        else
        {
            if (s[i] == '/' && s[i + 1] == '*')
            {
                in_comment = 1;
                i++; // Skip the '*' character
            }
            else
            {
                s[j++] = s[i]; // Copy non-comment character
            }
        }
    }
    s[j] = '\0'; // Null-terminate the modified string
}
