#include <stdio.h>

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr | Celsius\n"); // We added a simple heading with the 'printf' function.

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %9.1f\n", fahr, celsius); // Changed the width of 'celsius' so that the heading is placed correctly above the temp values.
        fahr = fahr + step;
    }
}
