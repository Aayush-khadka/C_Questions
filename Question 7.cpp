#include <stdio.h>

int main() {

    int num1, num2;
    printf("Enter your first and second  number : ");
    scanf("%d %d",&num1,&num2);

    if (num1 > 0 && num2 > 0) 
        printf("Both numbers are positive.\n");
     else 
        printf("At least one of the numbers is not positive.\n");

    if (num1 == 0 || num2 == 0) 
       printf("At least one of the numbers is zero.\n");
     else 
       printf("Neither of the numbers is zero.\n");
    

    if (!(num1 < 0)) 
        printf("The first number is not negative.\n");
     else 
        printf("The first number is negative.\n");

    return 0;
}

