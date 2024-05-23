// Write a C program that creates a pointer to an integer variable and prints its value to the
//console. Use the * operator to declare the pointer.

#include<stdio.h>

int main()
{
	int a=5;
	int *ptr;
	
	ptr=&a;
	
	printf("The value is:%d",*ptr);
	return 0;
}
