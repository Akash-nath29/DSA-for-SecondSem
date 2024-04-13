#include <stdio.h> // Standard Input Output Header File

int main()
{
    int size, data; //Declaring size and data variable
    printf("Array Initialization\n");
    // Taking array size as user input
    printf("Enter array size:   ");
    scanf("%d", &size); // Storing user input in size variable
    int arr[size]; // Declaring array of size 'size'
    for(int i=0; i<size; i++) // Loop to take user input for array elements
    {
        printf("Enter data for index %d:   ", i);
        scanf("%d", &data); // Storing user input in data variable
        arr[i] = data; // Storing data in array at index i
    }
    return 0; // Returning 0 to exit
}
