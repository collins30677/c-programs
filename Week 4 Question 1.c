// Variable Declaration and Data Type

#include <stdio.h>

int main() {
    // Declare variables
    float balance, withdrawal;

    // Ask the user for the initial balance
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    // Continue withdrawing while the balance is greater than zero
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        balance = balance - withdrawal;

        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Your balance is zero or negative. Withdrawals stopped.\n");

    return 0;
}
