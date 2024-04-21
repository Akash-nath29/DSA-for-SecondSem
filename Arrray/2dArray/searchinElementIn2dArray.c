//Searching element in 2d array
#include <stdio.h>

int main(){
	int x_size, y_size, target;
	printf("Enter x size:	");
	scanf("%d", &x_size);
	printf("Enter Y size:	");
	scanf("%d", &y_size);
	int arr[x_size][y_size];
	for(int i=0; i<x_size; i++){
		for(int j=0; j<y_size; j++){
			printf("Enter %d-%d value:	", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("Enter target element:	");
	scanf("%d", &target);
	for(int i=0; i<x_size; i++){
		for(int j=0; j<y_size; j++){
			if(target==arr[i][j]){
				printf("%d found at %d-%d position!!", target, i, j);
				break;
			}
		}
	}
	return 0;
}