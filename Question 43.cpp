//Write a C program that accesses the members of a structure using the dot operator. Create a structure to store information about a rectangle, including its length and width. Compute its  area and print it to the console.

#include<stdio.h>

struct rectangle{
	int length;
	int width;
};

int main()
{
	struct rectangle rect[3]{
		{2,4},{3,4},{4,5}
	};
	
	for(int i =0;i<3;i++)
	{
		printf("The Area of the rectange is: %d \n",rect[i].length*rect[i].width);
	}
	return 0;
}
