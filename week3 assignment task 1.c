#include <stdio.h>

int main()
{
    int attendance;
    int average_Marks;

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    printf("Enter average marks: ");
    scanf("%d", &average_Marks);

    if (attendance >= 75 && average_Marks >= 40)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not eligible");
    }

    return 0;
}