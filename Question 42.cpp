//Write a C program that creates a structure to store information about a student, including their name, ID number, and GPA. Declare a variable of this structure type and initialize its values. Print the values of the structure to the console.

#include<stdio.h>

struct student {
	char name[50];
	int id;
	int gpa;
};

int main()
{
	  struct student students[2];
	
      for (int i=0;i<2;i++)
      {
      	printf("Enter students name:");
      	gets(students[i].name);
      	printf("Enter the Students ID:");
      	scanf("%d",&students[i].id);
      	printf("Enter the Students GPA: ");
      	scanf("%d",&students[i].gpa);
      	getchar();
      	printf("=============================== \n");
      	
	  }
	  
	 printf("THE ENTERED DATA OF STUDENTS ARE: \n");
	for (int i=0;i<2;i++)
      {
      	printf("===============================\n");
      	printf(" Students name: %s \n",students[i].name);
      	printf(" Students ID: %d \n",students[i].id);
      	printf(" Students GPA: %d \n",students[i].gpa);
      	printf("===============================\n");
	  }
	 return 0;
 
}
