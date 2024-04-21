#include <stdio.h>

//Deleting element from a 2d array

#define MAX_SIZE 100

void deleteElement(int arr[][MAX_SIZE], int row, int column, int x_size, int y_size) {
    if (row < 0 || row >= x_size || column < 0 || column >= y_size) {
        printf("Invalid Position!!");
        return;
    }

    // Shift elements to overwrite the element to be deleted
    for (int i = row; i < x_size - 1; i++) {
        for (int j = column; j < y_size; j++) {
            arr[i][j] = arr[i + 1][j];
        }
    }
}

int main() {
    int x_size, y_size, row, column;
    printf("Enter X size: ");
    scanf("%d", &x_size);
    printf("Enter Y size: ");
    scanf("%d", &y_size);
    int arr[MAX_SIZE][MAX_SIZE];

    // Input the array
    for (int i = 0; i < x_size; i++) {
        for (int j = 0; j < y_size; j++) {
            printf("Enter %d-%d element: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter row to delete data: ");
    scanf("%d", &row);
    printf("Enter column to delete data: ");
    scanf("%d", &column);

    deleteElement(arr, row, column, x_size, y_size);

    // Print the modified array
    for (int i = 0; i < x_size - 1; i++) {
        for (int j = 0; j < y_size; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
