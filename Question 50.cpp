//Write a C program that uses pointers to iterate over an array of integers and print its values
//to the console.

#include <stdio.h>

int main() {
    
    int numbers[] = {10, 20, 30, 40, 50};
    
    
    int size = sizeof(numbers) / sizeof(numbers[0]; 
    
   
    int *ptr;
    
  
    ptr = numbers;
    
     
    printf("Array values:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr); 
        ptr++; 
    }
    printf("\n");

    return 0;
}

