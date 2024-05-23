#include <stdio.h>
#include<math.h>

int main() {

    float num1, num2;

    printf("Enter the first number: ");
    

    scanf("%f", &num1);


    printf("Enter the second number: ");
    

    scanf("%f", &num2);


    printf("Addition: %.2f \n",  num1 + num2);
    printf("Substraction: %.2f \n ", num1 - num2);
    printf("Multiplication:  %.2f \n", num1 * num2);
    printf("Division: %.2f \n",num1 / num2);
    printf("Modulus: %.2f \n ", fmod(num1,num2)); 
   

    return 0;
}

