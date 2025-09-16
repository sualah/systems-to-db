#include <stdio.h>

#define IN 1    // Inside a word
#define OUT 0   // Outside a word

// Function to count words, lines, and characters in input
int main()
{
  int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("Lines: %d Words: %d Characters: %d\n", nl, nw, nc);
    
    return 0;
}