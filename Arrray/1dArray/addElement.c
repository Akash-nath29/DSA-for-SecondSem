#include <stdio.h>

//We will insert data into specific position of an array

int addElementAtSpecificPosition(int arr[], int size, int data, int position)
{
    if (position < 0 || position > size)
    {
        printf("Invalid Position\n");
        return arr; // Returning the original array if position is invalid
    }
    arr[position] = data;
    return arr;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size, data, position;
    printf("Add Element to Array\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element of the array: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the data to be inserted: ");
    scanf("%d", &data);
    printf("Enter the position to insert the data: ");
    scanf("%d", &position);
    int *new_arr = addElementAtSpecificPosition(arr, size, data, position);
    printf("Array after inserting the element: ");
    printArray(new_arr, size);
    return 0;
}
