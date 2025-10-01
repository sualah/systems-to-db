/* Exercise l-14. Write a program to print a histogram of the frequencies of dif-
* ferent characters in its input. 
*/
#include <stdio.h>
#define ASCII_SIZE 128 // Define the size of the ASCII character set
int main()
{
    int c, i, max_freq;
    int freq[ASCII_SIZE]; // Array to hold frequency of each character

    // Initialize frequency array to zero
    for (i = 0; i < ASCII_SIZE; ++i)
        freq[i] = 0;

    // Read input and count frequencies
    while ((c = getchar()) != EOF)
    {
        if (c >= 0 && c < ASCII_SIZE) // Ensure character is within ASCII range
            ++freq[c];
    }

    // Find the maximum frequency for scaling the histogram
    max_freq = 0;
    for (i = 0; i < ASCII_SIZE; ++i)
        if (freq[i] > max_freq)
            max_freq = freq[i];

    // Print the histogram
    for (i = 0; i < ASCII_SIZE; ++i)
    {
        if (freq[i] > 0) // Only print characters that appeared in input
        {
            printf("%3d '%c': ", i, (i >= 32 && i <= 126) ? i : ' '); // Print character code and printable character
            int bar_length = (freq[i] * 50) / max_freq; // Scale bar length to a maximum of 50
            int j;
            for (j = 0; j < bar_length; ++j)
                putchar('*');
            printf(" (%d)\n", freq[i]); // Print frequency count
        }
    }

    return 0;
}