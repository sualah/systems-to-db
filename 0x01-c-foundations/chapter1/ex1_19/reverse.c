/*Exercise 1-19. Write a function reverse ( s} that reverses the character
string s. Use it to write a program that reverses its input a line at a time.*/

#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int lim);
int str_length(char s[]);
void reverse(char s[]);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = _getline(line, MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

int _getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

int str_length(char s[])
{
    int i, c;

    while (s[i] != '\0')
        ++i;
    return i;
}

void reverse(char s[])
{
    int i, back, front, len;
    char temp;

    len = str_length(s);

    if (s[len - 1] == '\n')
    {
        back = len - 2;
    }
    else
    {
        back = len - 1;
    }

    front = 0;
    i = 0;
    while (i < str_length(s) / 2)
    {
        temp = s[front];
        s[front] = s[back];
        s[back] = temp;
        --back;
        ++front;
        ++i;
    }
}
