//Write a C program that defines two strings and compares them using the strcmp() function. Print the result of the comparison to the console.

#include<stdio.h>
#include<string.h>
 int main()
 {
 	char str1[20]="Aayush",str2[20]="Aashish";
 	int result=strcmp(str1,str2);
 	
 	if(result<0){
 		printf("%s is smaller than %s",str1,str2);
	 }
	 if(result>0)
	 {
	 	printf("%s is larger than %s",str1,str2);
	 }
	 else
	 {
	 	printf("%s is equal to %s",str1,str2);
	 }
	 return 0;
 }
