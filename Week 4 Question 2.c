// Varible Declaration and Data Type

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declare variables
    int secretNumber, guess, attempts = 0;

    // Initialize the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 20
    secretNumber = rand() % 20 + 1;

    // Ask the player to guess the number
    while (1) {
        printf("Guess a number between 1 and 20: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        }
        else if (guess < secretNumber) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations!\n");
            break;
        }
    }

    // Display the total number of attempts
    printf("Total attempts: %d\n", attempts);

    return 0;
}
