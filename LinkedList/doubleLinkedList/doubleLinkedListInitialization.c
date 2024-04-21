//Double Linked List Initialization
#include <stdio.h> //including standard input output header file
#include <stdlib.h> //including standard library header file

struct Node { //defining structure of Node
	int data; //data of node
	struct Node* previous; //pointer to previous node
	struct Node* next; //pointer to next node
};

int main(){
	struct Node* node1 = (struct Node*)malloc(sizeof(struct Node)); //allocating memory to node1
	struct Node* node2 = (struct Node*)malloc(sizeof(struct Node)); //allocating memory to node2
	struct Node* node3 = (struct Node*)malloc(sizeof(struct Node)); //allocating memory to node3
	struct Node* node4 = (struct Node*)malloc(sizeof(struct Node)); //allocating memory to node4
	
	node1->previous = NULL; //initializing previous pointer of node1
	node1->data = 13; //initializing data of node1
	node1->next = node2; //initializing next pointer of node1
	node2->previous = node1; //initializing previous pointer of node2
	node2->data = 14; //initializing data of node2
	node2->next = node3; 	//initializing next pointer of node2
	node3->previous = node2; //initializing previous pointer of node3
	node3->data = 15; //initializing data of node3
	node3->next = node4; //initializing next pointer of node3
	node4->previous = node3; //initializing previous pointer of node4
	node4->data = 16; //initializing data of node4
	node4->next = NULL; //initializing next pointer of node4
	
	printf("%d\t", node1->previous);
	printf("%d\t", node1->data);
	printf("%d\t", node1->next);
	printf("\n");
	printf("%d\t", node2->previous);
	printf("%d\t", node2->data);
	printf("%d\t", node2->next);
	printf("\n");
	printf("%d\t", node3->previous);
	printf("%d\t", node3->data);
	printf("%d\t", node3->next);
	printf("\n");
	printf("%d\t", node4->previous);
	printf("%d\t", node4->data);
	printf("%d\t", node4->next);
	printf("\n");
	return 0;
}