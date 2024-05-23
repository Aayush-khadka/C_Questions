// Write a C program that defines a recursive function that calculates the factorial of a number. Call the function and print the result to the console.

#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;

    else
        return n * factorial(n - 1);
}

int main() {
    int num = 4;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}


