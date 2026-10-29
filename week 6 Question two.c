// Variables Declaration and Data Type

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declare variables and data types
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    // Initialize the random number generator
    srand(time(NULL));

    // Assign random occupancy to every room
    for (floor = 0; floor < 5; floor++)
    {
        for (room = 0; room < 10; room++)
        {
            occupancy[floor][room] = rand() % 2;
        }
    }

    // Display occupied and vacant rooms per floor
    printf("--- Room Occupancy Report ---\n");

    for (floor = 0; floor < 5; floor++)
    {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++)
        {
            if (occupancy[floor][room] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               floor + 1, occupied, vacant);
    }

    return 0;
}
