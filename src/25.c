#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 3;

    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Division: %d / %d = %lf\n", num1, num2, (float)num1 / num2);

    return 0;
}
