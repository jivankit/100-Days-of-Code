//Q10: Write a program to input time in seconds and convert it to hours-minutes-seconds format.

#include <stdio.h>

int main() {
    int s, h, m, rem;
    
    printf("Enter time in seconds: ");
    scanf("%d", &s);
    
    h = s / 3600;
    m = (s % 3600) / 60;
    rem = (s % 3600) % 60;
    
    printf("%d seconds = %d hours, %d minutes, %d seconds\n", s, h, m, rem);
    
    return 0;
}