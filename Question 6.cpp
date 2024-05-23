#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter the number for a and b: ");
    scanf("%d %d", &num1,&num2);
    printf("The inputted values are a= %d and b= %d",num1,num2);
    if (num1 == num2) 
        printf(" \na is equal to value b" );
     else 
        printf("\na is not equal to b");
    if (num1 != num2) 
        printf("\na is not equal to b");
     else 
        printf("\na is equal to b");
    if (num1 < num2) 
        printf("\na is smaller than b");
     else 
        printf("\na is not smaller than b");
    if (num1 > num2) 
        printf("\na is greater than b");
    else 
        printf("\na is not greater than b");
    if (num1 <= num2) 
        printf("\na is smaller or equals to b");
     else 
        printf("\na is not smaller or equal to b");
    if (num1 >= num2) 
        printf("\na is greater or equals to b");
     else 
        printf("\na is not greater or equals to b");
    return 0;
}

