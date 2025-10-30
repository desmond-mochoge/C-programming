/*NAME:DESMOND MESA MOCHOGE
  REG NO:PA106/G/28781/25
  DESCRIPTION:Program to check room occupancy
*/

#include <stdio.h>

int main() {
    int occupancy[5][10];
    int i, j;
    int occupied, vacant;
    int totaloccupied = 0, totalvacant = 0;

    printf("ROOM OCCUPANCY (ONE BRANCH)\n");
    printf("Enter 1 for occupied and 0 for vacant rooms.\n");

    for (i = 0; i < 5; i++) {
        printf("Floor %d:\n", i + 1);
        occupied = 0;
        vacant = 0;

        for (j = 0; j < 10; j++) {
            printf("  Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);

            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d : Occupied = %d , Vacant= %d\n", i + 1, occupied, vacant);

        totaloccupied += occupied;
        totalvacant += vacant;
    }

    printf("Total Occupied Rooms: %d\n", totaloccupied);
    printf("Total Vacant Rooms: %d\n", totalvacant);
    printf("Total Rooms in the Branch: %d\n", totaloccupied + totalvacant);

    return 0;
}