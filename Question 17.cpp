#include <stdio.h>

int main() {

    int userInput;
    printf("Enter an integer: ");
    scanf("%d", &userInput);
    if (userInput % 2 == 0) {
        printf("%d is an even integer.\n", userInput);
    } else {
        printf("%d is an odd integer.\n", userInput);
    }

    return 0;
}

