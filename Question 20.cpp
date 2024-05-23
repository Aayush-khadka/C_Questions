#include <stdio.h>

int main() {

    int userInput;

    printf("Enter an integer: ");
    scanf("%d", &userInput);

    (userInput >= 0) ? printf("The number is a positive.") : printf("The number is a negative.");

    return 0;
}

