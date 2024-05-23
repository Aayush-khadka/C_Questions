//Write a C program that defines a function that takes an array of integers and its size as arguments, and returns the sum of its elements. Call the function and print the result to the console.

#include<stdio.h>

int sums(int arr[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
	
}

int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the values: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The sum of upto the given size is: %d",sums(arr,size));
	return 0;
	
}
