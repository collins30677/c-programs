// Variable Declaration and Data Type

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declare variables and data types
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    // Initialize the random number generator
    srand(time(NULL));

    // Assign random occupancy to every room
    for (branch = 0; branch < 3; branch++)
    {
        for (floor = 0; floor < 5; floor++)
        {
            for (room = 0; room < 10; room++)
            {
                chain[branch][floor][room] = rand() % 2;

                // Count occupied rooms
                if (chain[branch][floor][room] == 1)
                {
                    totalOccupied++;
                }
            }
        }
    }

    // Display total occupied rooms
    printf("--- Hotel Chain Occupancy Report ---\n");
    printf("Total Rooms: %d\n", 3 * 5 * 10);
    printf("Total Occupied Rooms: %d\n", totalOccupied);
    printf("Total Vacant Rooms: %d\n",
           (3 * 5 * 10) - totalOccupied);

    return 0;
}
