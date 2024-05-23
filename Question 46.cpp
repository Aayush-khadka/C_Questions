//Write a C program that uses a pointer to a structure. Create a structure to store information
//about a book, including its title, author, and publication year. Use a pointer to the structure
//to access the members of the structure to display in console.

#include<stdio.h>


struct Book{
	char title[20];
	char author[20];
	int publication_year;
	
};

int main()
{
	struct Book book;
	
	struct Book *ptrbook;
	
	ptrbook=&book;
	
	printf("Enter your book title: ");
	scanf("%s",ptrbook->title);
	printf("Enter the author of the book: ");
	scanf("%s",ptrbook->author);
	printf("Enter the publication year: ");
	scanf("%d",ptrbook->publication_year);
	
	printf("=================================\n");
	printf("THE Details of the book are:\n ");
	printf("=================================\n");
	
	printf("Book Name: %s\n", ptrbook->title);
	printf("Author Name: %s \n", ptrboo3k->author);
	printf("publication year: %d \n", ptrbook->publication_year);
	return 0;
}















