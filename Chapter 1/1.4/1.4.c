// Here, we switched places in all instances of 'ceslius' and 'fahr' and also changed the
// calculating formula. We also modified the heading and width of both temperature values.

#include <stdio.h>

main()
{
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius | Fahreneit\n");

    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%5.0f %11.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
