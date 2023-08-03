// In the code below, we changed the logic in the 'for' loop. In the initialization part
// we set 'fahr' to 300. The condition is set to 'fahr >= 0', since we want to gradually
// decrease the value of 'fahr'. Lastly the decrement step is set to decrease by 20 each
// time the loop successully runs.

#include <stdio.h>

main ()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
