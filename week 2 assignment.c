//Variable declaration and Data Type

#include <stdio.h>

int main()
{
    // Declaration of variables
    float radius;
    float height;
    float pi = 3.14159;
    float volume;
    float surface_Area;

    // Ask the user to enter the radius
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Ask the user to enter the height
    printf("Enter the height: ");
    scanf("%f", &height);

    // Calculate the volume
    volume = pi * radius * radius * height;

    // Calculate the surface area
    surface_Area = 2 * pi * radius * radius
                + 2 * pi * radius * height;

    // Display the results
    printf("\nVolume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surface_Area);

    return 0;
}