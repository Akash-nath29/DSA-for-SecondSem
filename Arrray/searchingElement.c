//Searching Element in an array
#include <stdio.h>

void searchElement(int arr[], int target, int size){ //function to search element
	for(int i=0; i<size; i++){ //loop to search element
		if(target==arr[i]){ //if element found
			printf("%d found at %d position", target, i+1); //print the position
		}
	}
}

int main(){
	int size, target;
	printf("Enter the size of the array:	");
	scanf("%d", &size);
	int arr[size];
	for(int i=0; i<size; i++){
		printf("Enter %dth element:	", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Enter target:	");
	scanf("%d", &target);
	searchElement(arr, target, size);
	return 0;
}