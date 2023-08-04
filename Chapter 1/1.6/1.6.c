// The condition 'getchar() != EOF' evaluates to '1' (true) only when the input
// character is not equal to the end-of-file character. It is worth noting that on Windows,
// the end-of-file character can be accessed by pressing CTRL+Z, while on Unix-like systems
// it can be accessed by pressing CTRL+D.

#include <stdio.h>

main ()
{
  printf("Value: %d", getchar() != EOF);
}
