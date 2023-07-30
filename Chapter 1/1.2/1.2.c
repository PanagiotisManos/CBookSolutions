/* When we compile the program, we get the following error:

main.c: In function 'main':
main.c:6:12: warning: unknown escape sequence: '\c'
     printf("hello, world\c");
            ^~~~~~~~~~~~~~~~

In C, backslashes before certain characters are used to represent special escape sequences like \n (newline),
\t (tab), \" (double quote), etc. However, \c is not one of these recognized escape sequences, so the compiler
issues a warning about the unknown escape sequence. However, when we run the code, we still get output, though
unexpected (hello, worldc). */

#include <stdio.h>

main()

{
    printf("hello, world\c");
}
