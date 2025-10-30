/*NAME:DESMOND MESA MOCHOGE
  REG NO:PA106/G/28781/25
  DESCRIPTION:Program to check multiple branches
*/
#include <stdio.h>

int main() {
    int chain[3][5][10];
    int i, j, k;
    int occupied, vacant;
    int totalOccupied = 0, totalVacant = 0;

    printf(" BRANCHES OCCUPATION \n");
    printf("Enter 1 for occupied and 0 for vacant rooms.\n");

    for (i = 0; i < 3; i++) {
        printf("Branch %d:\n", i + 1);

        for (j = 0; j < 5; j++) {
            printf("  Floor %d:\n", j + 1);
            occupied = 0;
            vacant = 0;

            for (k = 0; k < 10; k++) {
                printf("Room %d: ", k + 1);
                scanf("%d", &chain[i][j][k]);

                if (chain[i][j][k] == 1)
                    occupied++;
                else
                    vacant++;
            }

            printf("  Floor %d : Occupied= %d , Vacant= %d\n", j + 1, occupied, vacant);

            totalOccupied += occupied;
            totalVacant += vacant;
        }

        printf("\n");
    }

    printf("Total Occupied Rooms in all branches: %d\n", totalOccupied);
    printf("Total Vacant Rooms in all Branches: %d\n", totalVacant);
    printf("Total Rooms in all Branches: %d\n", totalOccupied + totalVacant);

    return 0;
}