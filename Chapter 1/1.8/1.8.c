#include <stdio.h>

main()
{
    int c, nl;

    nl = 0;

    // Updated the 'while' loop to also count blanks and tabs.
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\t' || c == '\n')
            ++nl;

    printf("%d\n", nl);
}
