//Write a C program that asks the user to enter 5 integers and stores them in an array. Print
//the elements of the array to the console.

#include<stdio.h>
int main(){
	
	 int arr[5];
	 
    printf("Enter 5 numbers: ");
    for(int i=0;i<5;i++)
    {
    	scanf("%d",&arr[i]);
	}
	
	printf("The Entred numbers are: \n");
	  for(int j=0;j<5;j++)
    {
    	printf("%d \t",arr[j]);
	}
	return 0;
}
