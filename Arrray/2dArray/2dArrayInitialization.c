//2d array or matrix
//When we initialize array within an array, it becomes a 2d array, i.e, a matrix

//Initialization of a 2d array

#include <stdio.h>

int main(){
	int x_size, y_size; //x_size is the number of rows and y_size is the number of columns
	printf("Enter X size:	"); //taking input from user
	scanf("%d", &x_size); //storing the input in x_size
	printf("Enter Y size:	"); //taking input from user
	scanf("%d", &y_size); //storing the input in y_size
	
	int arr[x_size][y_size]; //initializing a 2d array
	printf("Array initialization successful.");
	return 0;
}