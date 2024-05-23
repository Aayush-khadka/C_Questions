//Write a C program that asks the user to enter a string and then prints the string to the console.


#include<stdio.h>
int main()
{
	char word[50];
	printf("Enter your string: ");
	gets(word);
	printf("The Entred string is: %s",word);
	return 0;
}
