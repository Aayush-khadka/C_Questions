//Write a C program that defines two strings and concatenates them using the strcat() function. Print the concatenated string to the console.


#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="Hello, ",str2[20]="Aayush";
	printf("The concated string is: %s",strcat(str1,str2));
	return 0;
}
