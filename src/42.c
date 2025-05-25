#include <stdio.h>

int main() {
    int i;
    
    printf("Enter n: ");
    scanf("%d", &i);
    
    if (i > 0) {
        while (i != 1) {
            if (i % 2 == 0) {
                i /= 2;
            } else {
                i = 3 * i + 1;
            }
        }
        
        printf("Palindrome number: %d\n", i);
    } else {
        printf("Invalid input. Please enter a positive integer.\n");
    }

    return 0;
}
