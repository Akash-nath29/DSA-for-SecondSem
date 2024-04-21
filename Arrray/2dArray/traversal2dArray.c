//Traversal of 2D array
#include <stdio.h> 

int main(){ 
	int x_size, y_size; //x_size is number of rows and y_size is number of columns
	printf("Enter x size:	"); //x_size is number of rows
	scanf("%d", &x_size); //taking input from user
	printf("Enter y size:	"); //y_size is number of columns
	scanf("%d", &y_size); //taking input from user
	
	int arr[x_size][y_size]; //declaring 2D array of size x_size*y_size
	for(int i=0; i<x_size; i++){ //loop for taking input from user
		for(int j=0; j<y_size; j++){ //loop for taking input from user
			printf("Enter %d-%d element:	", i, j); //taking input from user
			scanf("%d", &arr[i][j]); //taking input from user
		}
	}
	for(int i=0; i<x_size; i++){ //loop for printing 2D array
		for(int j=0; j<y_size; j++){ //loop for printing 2D array
			printf("%d\t", arr[i][j]); //printing 2D array
		}
		printf("\n"); //printing new line
	}
	return 0;
}