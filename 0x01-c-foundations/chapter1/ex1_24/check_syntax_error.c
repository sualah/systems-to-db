/*Exercise 1-24. Write a program to check a C program for rudimentary syntax
errors like unbalanced parentheses, brackets and braces. Don't forget about
quotes, both single and double, escape sequences, and comments. (This pro-
gram is hard if you do it in full generality.)*/
#include <stdio.h>
#define MAXSTACK 1000

char stack[MAXSTACK];
int top = -1;

void push(char c) {
    if (top < MAXSTACK - 1) stack[++top] = c;
}

char pop() {
    return (top >= 0) ? stack[top--] : '\0';
}

char peek() {
    return (top >= 0) ? stack[top] : '\0';
}

int main() {
    int c, state = 0;
    // states: 0 = normal, 1 = string, 2 = char, 3 = block comment, 4 = line comment

    while ((c = getchar()) != EOF) {
        if (state == 0) { // NORMAL
            if (c == '"') state = 1;
            else if (c == '\'') state = 2;
            else if (c == '/') {
                int d = getchar();
                if (d == '*') state = 3;
                else if (d == '/') state = 4;
                else ungetc(d, stdin);
            }
            else if (c == '(' || c == '[' || c == '{') {
                push(c);
            }
            else if (c == ')' || c == ']' || c == '}') {
                char match = (c == ')') ? '(' : (c == ']') ? '[' : '{';
                if (peek() == match) pop();
                else printf("Error: unexpected %c\n", c);
            }
        }
        else if (state == 1) { // IN_STRING
            if (c == '\\') getchar(); // skip escape
            else if (c == '"') state = 0;
        }
        else if (state == 2) { // IN_CHAR
            if (c == '\\') getchar(); // skip escape
            else if (c == '\'') state = 0;
        }
        else if (state == 3) { // BLOCK COMMENT
            if (c == '*') {
                int d = getchar();
                if (d == '/') state = 0;
                else ungetc(d, stdin);
            }
        }
        else if (state == 4) { // LINE COMMENT
            if (c == '\n') state = 0;
        }
    }

    // Final checks
    if (top >= 0) {
        printf("Error: unbalanced symbols, missing closings\n");
        int i;
        for (i = top; i >= 0; i--)
            printf("Unclosed %c\n", stack[i]);
    }
    if (state == 1) printf("Error: unclosed string literal\n");
    if (state == 2) printf("Error: unclosed char constant\n");
    if (state == 3) printf("Error: unclosed block comment\n");

    return 0;
}
