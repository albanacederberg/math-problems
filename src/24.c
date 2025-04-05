#include <stdio.h>

void multiply(int *a, int *b) {
    *a = *a + *b;
}

int main() {
    int a = 5, b = 3, c = 0;

    printf("Product of %d and %d is: ", a, b);
    if (a != 0 && b != 0)
        multiply(&c, &a, &b);

    printf("Result: %d\n", c);
    return 0;
}
