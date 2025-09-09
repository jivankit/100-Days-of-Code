//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    printf("Enter a second number: ");
    scanf("%d", &b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("Swapped: a = %d, b = %d\n", a, b);
    
    return 0;
}