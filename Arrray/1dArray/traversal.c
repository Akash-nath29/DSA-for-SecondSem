#include <stdio.h>

//We will traverse the array using both pointers and basic iterations

void traverseArrayWithBasicIteration(int arr[], int size){ //This function will traverse the array using basic iteration
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]); //Printing the ith element of the array
	}
	printf("\n");
}

void traverseArrayWithPointer(int arr[], int size){ //This function will traverse the array using pointers
	int *ptr = arr; //Assigning the base address of the array to the pointer
	for(int i=0; i<size; i++){ //Iterating through the array
		printf("%d", *ptr); //Printing the value at the address pointed by the pointer
		ptr++; //Incrementing the pointer to point to the next element
	}
}

int main(){
	int size; //Size of the array
	printf("Enter array size:	"); //Taking the size of the array as input
	scanf("%d", &size);
	int arr[size]; //Declaring the array of the given size
	for(int i=0; i<size;i++){ //Taking the elements of the array as input
		printf("Enter %dth element:	", i);
		scanf("%d", &arr[i]); //Taking the ith element of the array as input
	}
	traverseArrayWithBasicIteration(arr, size); //Calling the function to traverse the array using basic iteration
	traverseArrayWithPointer(arr, size); //Calling the function to traverse the array using pointers
	return 0;
}