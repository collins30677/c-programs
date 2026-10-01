#include <stdio.h>

int main()
{
    int waterUnits;
    float totalBill;

    printf("Enter water units consumed: ");
    scanf("%d", &waterUnits);

    if (waterUnits <= 30)
    {
        totalBill = waterUnits * 20;
    }
    else if (waterUnits <= 60)
    {
        totalBill = waterUnits * 25;
    }
    else
    {
        totalBill = waterUnits * 30;
    }

    printf("Total water bill: %.2f KES\n", totalBill);

    return 0;
}