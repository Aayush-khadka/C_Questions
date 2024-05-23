#include <stdio.h>

int main() {
    int a = 5, b = 2, c = 3;
    int result = (a + b) * c / 2 - (a % b);
    printf("Result: %d\n", result);

    return 0;
}

