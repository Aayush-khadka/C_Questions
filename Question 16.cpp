#include <stdio.h>

int main() {

    int userInput;

    printf("Enter an integer: ");
    scanf("%d", &userInput);
    
    if (userInput > 0) {
        printf("%d is a positive integer.\n", userInput);
    } else if (userInput < 0) {
        printf("%d is a negative integer.\n", userInput);
    } else {
        printf("%d is zero.\n", userInput);
    }
    return 0;
}

