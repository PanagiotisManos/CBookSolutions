#include <stdio.h>

// Symbolic constant used to represent the total number of possible characters in the ASCII character set.
#define NUM_CHARS 128

int main()
{
    int c;
    int char_freq[NUM_CHARS] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c >= 0 && c < NUM_CHARS)
        {
            ++char_freq[c];
        }
    }

    // After processing the input, the program prints the histogram of character frequencies.
    // It uses a 'for' loop to iterate through the 'char_freq' array. If the frequency of a character
    // is greater than 0, it prints the character and its ASCII value if the character is printable
    // (ASCII values between 32 and 126), or just the ASCII value if it's not printable. Then,
    // it prints a series of '#' characters equal to the frequency of the character, creating
    // a histogram-like display of character frequencies.
    printf("Character Frequency Histogram:\n");
    for (int i = 0; i < NUM_CHARS; ++i)
    {
        if (char_freq[i] > 0)
        {
            if (i >= 32 && i <= 126)
            {
                printf("'%c' (%d): ", i, i);
            }
            else
            {
                printf("'%d': ", i);
            }

            for (int j = 0; j < char_freq[i]; ++j)
            {
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
