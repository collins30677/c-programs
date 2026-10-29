// Variables Declaration and Data Types

#include <stdio.h>

int main()
{
    // Declare variables and data types
    float revenue[7];
    float totalRevenue = 0.0;
    float averageRevenue;
    int i;

    // Input revenue for each day
    for (i = 0; i < 7; i++)
    {
        printf("Enter revenue for day %d (KSh): ", i + 1);
        scanf("%f", &revenue[i]);

        totalRevenue = totalRevenue + revenue[i];
    }

    // Calculate average daily revenue
    averageRevenue = totalRevenue / 7;

    // Display results
    printf("\n--- Weekly Revenue Report ---\n");
    printf("Total Weekly Revenue: KSh %.2f\n", totalRevenue);
    printf("Average Daily Revenue: KSh %.2f\n", averageRevenue);

    return 0;
}
