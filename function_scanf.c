#include <stdio.h>

// Function prototype (declaration)
int sum(int, int);

int main() {
    int a, b;
    
    //  input prompts and format specifiers
    printf("Enter the value of A: ");
    scanf("%d", &a);  
    
    printf("Enter the value of B: ");
    scanf("%d", &b);  

    // function call
    int result = sum(a, b);
    
    printf("The total sum is %d\n", result); 
    
    return 0;
}

// Function definition
int sum(int a, int b) {  
    return a + b;
}
