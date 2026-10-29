// Variable Declaration and Data Type

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    return celsius;
}

int main() {
	// Variable Declaration
    float fahrenheit;
    float celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Celsius: %.2f degrees C\n", celsius);

    return 0;
}

