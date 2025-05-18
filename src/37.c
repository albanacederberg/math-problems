#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 3;
    int result;

    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }

    printf("The larger number is: %d\n", result);

    return 0;
}
