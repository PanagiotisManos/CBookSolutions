#include <stdio.h>

main()
{
    int c;
    int prevChar = EOF;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (prevChar != ' ')
            {
                putchar(c);
            }
        }
        else
        {
            putchar(c);
        }

        prevChar = c;
    }
}
