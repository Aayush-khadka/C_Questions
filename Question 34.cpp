//Write a C program that asks the user to enter a string and then calculates and prints the length of the string.

#include<stdio.h>
#include <string.h>

int main(){
	char word[50];
	printf("Enter your string: ");
	gets(word);
	printf("The lenght of the string is:%d",strlen(word));
	
}
