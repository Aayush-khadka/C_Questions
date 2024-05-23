//Write a C program that defines two strings and copies the contents of one string to the other using the strcpy() function. Print the copied string to the console.

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20]="Aayush",str1_copy[20];
	printf("The orgianl string is %s and the copied to another variable is %s",str1,strcpy(str1_copy,str1));
	return 0;
}
