//Write a C program that defines a function that takes an array of integers as a parameter. The
//function should print the sum of the elements in the array to the console. Call the function
//with an array of your choice.

#include<stdio.h>


int sum(int arr[])
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int sums=sum(arr);
	printf("The sum is %d",sums);
	return 0;
	
	}
	
