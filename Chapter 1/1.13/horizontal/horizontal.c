#include <stdio.h>

// Symbolic constants
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
    for (int i = 1; i < 20; ++i)
    {
        printf("%2d: ", i);
        for (int j = 0; j < word_lengths[i]; ++j)
            printf("#");
        printf("\n");
    }

    return 0;
}
