// Variable declaration and Data Type

#include <stdio.h>

int main()
{
    // Declaration of variables
    int age;
    int annual_Income;

    // Ask the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Ask the user to enter their annual income
    printf("Enter your annual income: ");
    scanf("%d", &annual_Income);

    // Check if the customer qualifies for the loan
    if (age >= 21 && annual_Income >= 21000)
    {
        printf("Congratulations you qualify for a loan.\n");
    }
    else
    {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}