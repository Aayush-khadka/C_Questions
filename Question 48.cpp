//Write a C program that defines a structure for a student with name, ID, and grade fields.
//Create an array of 5 students and assign values to each element of the array. Print the values
//of the elements to the console.

#include<stdio.h>

struct Student{
	char name[50];
	int id;
	char grade;
};


int main()
{
	struct Student students[5]{
		{"Aayush",1,'A'},{"Ram",2,'B'},{"Hari",3,'C'},{"Ramesh",4,'D'},{"Sita",5,'A'}
	};
	
	printf("The values are: \n ");
	printf("=======================================\n");
	for(int i=0;i<5;i++)
	{
		printf("Name: %s \n",students[i].name);
		printf("ID: %d \n",students[i].id);
		printf("Grade: %c \n",students[i].grade);
		printf("=======================================\n");
	}
	 return 0;
	
}
