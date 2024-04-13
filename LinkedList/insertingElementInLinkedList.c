#include <stdio.h>
#include <stdlib.h>

//We will insert node into a existing Linked List at beginning, end an at user defined position

struct Node {
	int data;
	struct Node* next;
};

void printList(struct Node* node){
	while(node!=NULL){
		printf("%d ", node->data);
		node = node->next;
	}
	printf("\n");
}

void insertAtBeginning(struct Node** head, int data){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	if(new_node==NULL){
		printf("Overflow!!");
		return;
	}
	new_node->data=data;
	new_node->next=*head;
	*head = new_node;
}

void insertAtEnd(struct Node** head, int data){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	if(new_node==NULL){
		printf("Overflow");
		return;
	}
	new_node->data = data;
	new_node->next = NULL;
	if (*head == NULL){
		*head = new_node;
		return;
	}
	struct Node* last = *head;
	while(last->next!=NULL){
		last = last->next;
	}
	last->next = new_node;
}

void insertAtSpecificPosition(struct Node** head_ref, int new_data, int position)
{
    if (position < 0) {
        printf("Invalid position.");
        return;
    }
    if (position == 0)
    {
        insertAtBeginning(head_ref, new_data);
        return;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) 
    {
        printf("Memory allocation failed.");
        return;
    }
    new_node->data = new_data;
    struct Node* current = *head_ref;
    for (int i = 0; i < position - 1 && current != NULL; i++) 
    {
        current = current->next;
    }
    if (current == NULL)
    {
        printf("Position is beyond the end of the list. Inserting at the end.\n");
        insertAtEnd(head_ref, new_data);
        return;
    }
    new_node->next = current->next;
    current->next = new_node;
}


int main(){
	struct Node* head_ref = NULL;
	int node_num, data;
	printf("Enter the number of nodes u want:	");
	scanf("%d", &node_num);
	for(int i=0; i<node_num; i++){
		printf("Enter the Data of the node:	");
		scanf("%d", &data);
		insertAtBeginning(&head_ref, data);
	}
	printList(head_ref);
	insertAtEnd(&head_ref, 5);
	printList(head_ref);
	int pos, num;
	printf("Enter the position you wanna insert the data:	");
	scanf("%d", &pos);
	printf("Enter the data:	");
	scanf("%d", &num);
	insertAtSpecificPosition(&head_ref, pos, num);
	printList(head_ref);
	return 0;
}