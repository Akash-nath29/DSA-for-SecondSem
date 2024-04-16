//Adding Element in a 2d Array
#include <stdio.h>

void addElement(int arr[][100], int row, int column, int element, int x_size, int y_size){ //function to add element
	if(row<0 && column<0 || row>y_size && column>x_size){ //if position is invalid
		printf("Invalid Position!!");
		return; //returning from the function
	}
	arr[row][column] = element; //adding element
	printf("Adding element done"); //printing message
}

int main(){
	int x_size, y_size, row, column, element; //x_size is the number of rows and y_size is the number of columns
	printf("Enter X size:	");
	scanf("%d", &x_size);
	printf("Enter Y size:	");
	scanf("%d", &y_size);
	int arr[x_size][y_size]; //initializing a 2d array
	for(int i=0; i<x_size; i++){ //loop to take input from user
		for(int j=0; j<y_size; j++){			 //loop to take input from user
			printf("Enter %d-%d element:	", i, j); //taking input from user
			scanf("%d", &arr[i][j]); //storing the input in array
		}
	}
	printf("Enter row to add data:	"); //taking input from user
	scanf("%d", &row);
	printf("Enter column to add data:	"); //taking input from user
	scanf("%d", &column);
	printf("Enter element value:	"); //taking input from user	
	scanf("%d", &element);
	addElement(arr, row, column, element, x_size, y_size); //calling the function
	return 0;
	
}