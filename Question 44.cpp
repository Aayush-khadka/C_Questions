// Write a C program that creates a union to store different types of data, including an integer, float, and character array. Initialize the union with different values and print them to the console.
#include <stdio.h>
#include<string.h>

union Data {
    int integer;
    float floating_point;
    char character_array[20];
};

int main() {
   
    union Data data;

    data.integer = 123;
    data.floating_point = 3.14;
    strcpy(data.character_array, "Hello, World!");
    printf("Integer value: %d\n", data.integer);

    
    printf("Floating-point value: %.2f\n", data.floating_point);


    printf("Character array value: %s\n", data.character_array);

    return 0;
}

