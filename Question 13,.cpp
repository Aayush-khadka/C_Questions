#include <stdio.h>

int main() {
    int integerVar;
    float floatVar;
    char charVar;
    double doubleVar;
    long longVar;

    printf("Size of int: %lu bytes\n", sizeof(integerVar));
    printf("Size of float: %lu bytes\n", sizeof(floatVar));
    printf("Size of char: %lu bytes\n", sizeof(charVar));
    printf("Size of double: %lu bytes\n", sizeof(doubleVar));
    printf("Size of long: %lu bytes\n", sizeof(longVar));

    return 0;
}

