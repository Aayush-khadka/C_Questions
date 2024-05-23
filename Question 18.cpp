#include <stdio.h>

int main() {

    int userInput;

    printf("Enter an integer: ");
    scanf("%d", &userInput);


    if (userInput % 2 == 0)
	 {
        if (userInput % 3 == 0)
		 {
            if (userInput % 5 == 0) 
			{
                printf("%d is a multiple of 2, 3, and 5.\n", userInput);
            } 
			else
			 {
                printf("%d is a multiple of 2 and 3, but not 5.\n", userInput);
            }
        } 
		else if (userInput % 5 == 0) {
            printf("%d is a multiple of 2 and 5, but not 3.\n", userInput);
        } 
		else
		 {
            printf("%d is a multiple of 2, but not 3 or 5.\n", userInput);
        }
    } 
	else if (userInput % 3 == 0)
	 {
        if (userInput % 5 == 0)
		 {
            printf("%d is a multiple of 3 and 5, but not 2.\n", userInput);
        } 
		else 
		{
            printf("%d is a multiple of 3, but not 2 or 5.\n", userInput);
        }
    } 
	else if (userInput % 5 == 0)
	 {
        printf("%d is a multiple of 5, but not 2 or 3.\n", userInput);
    }
	 else
	 {
        printf("%d is not a multiple of 2, 3, or 5.\n", userInput);
    }

    return 0;
}

