#include <stdio.h>

int main() {
    int x = 50;
    int *p = &x; // Store the address of x in pointer p

    printf("Value stored in p: %d\n", *p); // Print the value stored in p

    // Update the value of x using p
    *p = 75;

    printf("Updated value of x: %d\n", x); // Print the updated value of x

    return 0;
}
