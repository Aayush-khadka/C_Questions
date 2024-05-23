#include <stdio.h>

int main() {
    int num;

    do {
      
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &num);

        
        if (num >= 1 && num <= 10) {
            printf("Valid number entered: %d\n", num);
            break; 
        } else {
            printf("Invalid number. Please enter a number between 1 and 10.\n");
        }
    } while (1); 

    return 0;
}

