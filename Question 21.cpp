#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    (num % 3 == 0 || num % 5 == 0) ? printf("%d is divisible by 3 or 5.\n", num) : printf("%d is not divisible by 3 or 5.\n", num);

    return 0;
}

