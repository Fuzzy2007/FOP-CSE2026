#include <stdio.h>

// Function using pointers (Pass by Reference)
void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Original values: x = %d, y = %d\n", x, y);

    // 1. Swapping using the pointer function
    swapWithPointers(&x, &y);
    printf("After swapWithPointers: x = %d, y = %d\n", x, y);

    // 2. Swapping without pointers (Logic inside the same scope)
    // Using the XOR bitwise method to avoid a temporary variable
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("After XOR swap (no pointers): x = %d, y = %d\n", x, y);

    return 0;
}
