// Write a C program that defines a function that takes two integer pointers as arguments and swaps their values. Call the function and print the values of the pointers before and after the swap.

#include<stdio.h>

void swap(int *ptr1,int *ptr2)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}

int main()
{
	int a=5,b=6;
	int *ptr1=&a;
	int *ptr2=&b;
	printf("The VALUES BEFORE SWAP IS: %d   %d",*ptr1,*ptr2);
	swap(ptr1 , ptr2);
	printf("The VALUES AFTER SWAP IS: %d   %d",*ptr1,*ptr2);
}
