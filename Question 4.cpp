#include <stdio.h>

int main() {
  
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14159 * radius;
    printf("the area is: %.2f and the circumference is %.2f\n", area,circumference);
    return 0;
}

