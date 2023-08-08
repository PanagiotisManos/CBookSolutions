/* To test the word count program, we can provide various types of input
and observe the output to check if it correctly counts the lines, words,
and characters. For example, if we test the input "Hello World", we
should get an expected output of "1 2 11", where '1' is the number of
lines, '2' the number of words and '11' the number of characters.

NOTE: Upon entering the input, the program still waits to find the EOF
to terminate. When pressing Cntrl + Z to send the EOF signal, the program
reads one more character, so you should always subtract 1 from the total
characters counted. 

To uncover bugs in a program, it is essential to test it with various types of
input, including edge cases and corner cases. Here are some kinds of input that
are most likely to uncover bugs:

1. Empty Input: Test the program with an empty input or no input at all. This
will help ensure that the program handles empty cases correctly.

2. Minimal Input: Provide the smallest possible input that the program should
handle. For example, for a word count program, a single character or word would
be a minimal input.

3. Large Input: Test the program with large inputs that stress its memory usage
and processing capabilities.

4. Input with Special Characters: Include special characters, punctuation, and
symbols in the input to ensure the program handles them properly.

5. Input with Leading and Trailing Spaces: Test the program with inputs that have
leading and trailing spaces to check if it correctly ignores them or counts them
as part of the words.

6. Input with Tabs and Newlines: Use inputs that contain tabs and newlines to verify
the program's behavior in handling whitespace characters.

7. Inputs with Negative Cases: Test the program with inputs that are not expected
to produce valid output or are outside the program's intended scope. Check if the
program gracefully handles such cases without crashing or producing incorrect results.

8. Boundary Cases: Test inputs that are at the boundaries of the program's constraints,
like maximum or minimum allowed values.

9. Random Inputs: Generate random inputs programmatically or use random data to test
the program under a variety of scenarios.

10. Invalid Inputs: Test the program with invalid inputs that violate the expected
format or type.

11. Unicode Inputs: If applicable, test the program with inputs containing characters
from different languages and unicode ranges.

12. Inputs with File Redirection: Test the program by providing input from a file using
file redirection to simulate different scenarios. */

#include <stdio.h>

#define IN 1
#define OUT 0

main()
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
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", nl, nw, nc);
}
