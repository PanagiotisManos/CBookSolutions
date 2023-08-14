#include <stdio.h>

int max (num1, num2, num3) {
    int result;
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int main () {
    printf("%d", max(10, 50, 40));
}
