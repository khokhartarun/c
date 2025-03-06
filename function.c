#include <stdio.h>

// Function prototype (declaration)
int sum(int, int);

int main() {
    int a = 20;
    int b = 40;

    // Calling the function and storing the result
    int result = sum(a, b);
    printf("The sum of these values is %d\n", result);

    return 0;
}

// Function definition
int sum(int a, int b) {
    return a + b;  // Returning the sum instead of printing it inside the function
}
