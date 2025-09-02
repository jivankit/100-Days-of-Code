//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

int main() {
    float num1, num2;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    printf("Sum = %f\n", num1 + num2);
    printf("Difference = %f\n", num1 - num2);
    printf("Product = %f\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Quotient = %f\n", num1 / num2);
    } else {
        printf("Quotient = undefined (division by zero)\n");
    }
    
    return 0;
}