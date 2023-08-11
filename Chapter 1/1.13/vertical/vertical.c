#include <stdio.h>

//Symbolic constants
#define IN 1
#define OUT 0

int main()
{
    int c, state, length;
    int word_lengths[20];
    for (int i = 0; i < 20; ++i)
        word_lengths[i] = 0;

    state = OUT;
    length = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                if (length < 20)
                    ++word_lengths[length];
                state = OUT;
                length = 0;
            }
        }
        else
        {
            state = IN;
            ++length;
        }
    }

    printf("Word Length Histogram:\n");

    // The 'max_count' variable is introduced and initialized to 0. This variable
    // will hold the maximum frequency of word lengths in order to determine the
    // height of the histogram.
    int max_count = 0;

    // The first for loop iterates through the 'word_lengths' array to find the maximum
    // frequency (max_count) among the word lengths.
    for (int i = 1; i < 20; ++i)
    {
        if (word_lengths[i] > max_count)
            max_count = word_lengths[i];
    }

    // The next set of nested loops prints the histogram vertically. It starts from the
    // maximum frequency and goes down to 1. For each frequency level, it iterates through
    // the 'word_lengths' array and prints a " # " if the frequency for the current word length
    // is greater than or equal to the current frequency level. Otherwise, it prints "    "
    // (four spaces). This creates a vertical bar chart using the # symbol.
    for (int i = max_count; i > 0; --i)
    {
        for (int j = 1; j < 20; ++j)
        {
            if (word_lengths[j] >= i)
                printf("  # ");
            else
                printf("    ");
        }
        printf("\n");
    }

    for (int i = 1; i < 20; ++i)
        printf("%3d ", i);

    printf("\n");

    return 0;
}
