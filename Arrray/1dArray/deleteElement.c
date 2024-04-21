#include <stdio.h>

//We will delete an element of an array from user defined position

// Function to delete an element from a specific position in an array
void deleteElementAtSpecificPosition(int arr[], int size, int position) {
    if (position < 0 || position >= size) {
        printf("Invalid Position\n");
        return;
    }
    
    // Shift elements to the left to overwrite the element at the specified position
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

// Function to print the elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, position;
    printf("Delete Element from Array\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    // Input elements of the array
    for (int i = 0; i < size; i++) {
        printf("Enter the %d element of the array: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position of the element to delete: ");
    scanf("%d", &position);
    
    // Delete element at the specified position
    deleteElementAtSpecificPosition(arr, size, position);
    
    printf("Array after deleting the element: ");
    printArray(arr, size - 1); // Size is decreased by 1 after deletion
    
    return 0;
}
