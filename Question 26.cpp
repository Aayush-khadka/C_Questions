#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime;

    for (num = 2; num <= 100; ++num) {
        isPrime = true; 

        
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false; 
                break; 
            }
        }

        
        if (isPrime) {
            printf("The first prime number between 1 and 100 is: %d\n", num);
            break; 
        }
    }

    return 0;
}

