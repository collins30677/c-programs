// Variables and Data Types

#include <stdio.h>

int main()
{
    // Declaration of variables
    float principal;
    float rate;
    float time;
    float simple_Interest;

    // Get the principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Get the interest rate
    printf("Enter the interest rate: ");
    scanf("%f", &rate);

    // Get the time
    printf("Enter the time in years: ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_Interest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest = %.2f\n", simple_Interest);

    return 0;
}