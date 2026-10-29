// Variabke Declaration and Data Type

#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array to store the password
    char password[20];

    // Ask the user for the password at least once
    do {
        printf("Enter password: ");
        scanf("%19s", password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password. Try again.\n");
        }

    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");

    return 0;
}
