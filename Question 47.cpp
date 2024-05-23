#include <stdio.h>

union ComplexValue {
    int int_part;
    float float_part;
};


struct ComplexNumber {
    union ComplexValue real;
    union ComplexValue imaginary;
};

int main() {

    struct ComplexNumber complexNum;
    complexNum.real.int_part = 3;
    complexNum.imaginary.float_part = 2.5;
    printf("Real Part: %d\n", complexNum.real.int_part);
    printf("Imaginary Part: %.2f\n", complexNum.imaginary.float_part);
    return 0;
}

