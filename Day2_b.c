//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.14159

int main() {
    float r, area, circ;
    
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    
    area = PI * r * r;
    circumference = 2 * PI * r;
    
    printf("Area = %f\n", area);
    printf("Circumference = %f\n", circ);
    
    return 0;
}