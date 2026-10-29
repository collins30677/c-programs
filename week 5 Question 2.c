// Variable Declaration and Data Type

#include <stdio.h>

// Function to calculate the fare
float calculateFare(float distance) {
    float fare;

    fare = distance * 50;

    return fare;
}

int main() {
	// Variable Declaration
    float distance;
    float totalFare;

    printf("Enter the distance travelled in kilometres: ");
    scanf("%f", &distance);

    totalFare = calculateFare(distance);

    printf("Total fare: KSh %.2f\n", totalFare);

    return 0;
}

