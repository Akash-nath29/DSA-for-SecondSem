#include <stdio.h>
#include <stdlib.h>

//We will initialize Linked List

struct Node { //Node structure
	int data; //Data of the node
	struct Node* next; //Pointer to the next node
};

struct Node* createNode(int data){ //Function to create a node
	struct Node* node = (struct Node*)malloc(sizeof(struct Node)); //Allocating memory to the node
	node->data = data; //Assigning data to the node
	node->next = NULL; //Assigning NULL to the next pointer of the node
	return node; //Returning the node
}

int main(){
	int data;
	printf("Enter the data you want to store in the Node:	");
	scanf("%d", &data);
	struct Node* node = createNode(data); //Creating a node
	printf("Data of the node is:	%d", node->data); //Printing the data of the node
	return 0;
}