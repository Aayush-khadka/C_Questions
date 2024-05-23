// Write a C program that uses nested structures to store information about a car, including its make, model, and year. Create a structure to store information about the engine, including its horsepower and displacement. Add the engine structure as a member of the car structure and print the values of the car and engine to the console.

#include<stdio.h>
#include<string.h>

struct Engine{
	int horsepower;
	int displacement;
	
};

struct Car{
	char maker[20];
	char model[20];
	int year;
	struct Engine engine;
	
};

int main()
{
	
	struct Car car;
     strcpy(car.maker,"TOYATA");
	 strcpy(car.model,"XYZ");
	car.year=2001;
	car.engine.horsepower=4000;
	car.engine.displacement=30;
	printf("The Information about the car are as follow: \n");
	printf("MAKER:%s\n",car.maker);	
	printf("MODEL: %s\n",car.model);
	printf("YEAR: %d\n",car.year);
	printf("HORSEPOWER:%d\n",car.engine.horsepower);			
	printf("DISPLACEMENT:%d\n",car.engine.displacement);
	
	return 0;	
}
