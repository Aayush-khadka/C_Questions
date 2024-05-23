#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first number and second number: ");
    scanf("%d%d", &num1,&num2);
    (num1 > num2) ? printf("First number is greater\n") : printf("Second number is greater\n");
    return 0;
}

