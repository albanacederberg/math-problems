#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n = rand() % 10 + 1;
  double result = pow(n, 2) + 3 * n - 5;
  printf("The result is: %f\n", result);
  return 0;
}
