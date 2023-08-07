/* The value of 'EOF' is typically defined as '-1' (integer) in C programming, although the actual
value may vary depending on the implementation and platform. The reason 'EOF' is typically
assigned the value of '-1' is because this value cannot be a valid character in an input stream.
Therefore, when a character is read from an input stream and its value matches 'EOF', we know
that there are no more characters to be read. For example, consider the 'getchar' function used
in the original program. 'getchar' returns the next character from the standard input, and if
there is no more input to be read, it returns the value 'EOF'. By using a value that cannot
be a valid character, 'EOF' serves as a sentinel value that signals the end of the input stream. */

#include <stdio.h>

main()
{
    printf("The value of EOF is: %d\n", EOF);
}
