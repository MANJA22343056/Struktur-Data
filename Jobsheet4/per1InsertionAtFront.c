/*
    Nama File   : per1InsertionAtFront.c
    Nama        : Manja Fani Oktavia
    Nim         : 22343056
*/
#include <stdio.h>
#include <stdlib.h>

// Structure of the node 
struct Node
{
	int data ;
	struct Node *next ; // Pointer to the next node
	struct Node *prev ; // Pointer to the previous node	
} ;

void push (struct Node** head_ref , int new_data)
{
	/* 1 . allocate node */
	struct Node* new_node = (struct Node*) malloc (sizeof(struct Node));
	/*2. put in the data */
	new_node -> data= new_data ;
	/* 3. Make next of new node as head ass head and previous as NULL*/
	new_node-> next =(*head_ref);
	new_node-> prev =NULL;
	/* 4. Change prev of head node to new node */
	if ((*head_ref)!=NULL)
		(*head_ref)->prev= new_node ;
	/* 5. move the head to point to the new node*/
	(*head_ref)=new_node ;
}
void printList (struct Node* node)
{
	struct Node* last ;
	printf("\n Transversal in forward direction \n");
	while (node != NULL){
		printf("%d",node-> data);
		last = node ;
		node = node-> next ;
	}

	printf("\n Transversal in reverse direction \n");
		while (last != NULL){
			printf ("%d",last->data);
			last = last->prev ;
	}
}
int main()
{
	/* start with the empty list */
	struct Node* head= NULL;
	push(&head,6);
	push(&head,5);
	push(&head,2);
	printf(" Created DLL is:");
	printList (head);
	getchar();
	return 0 ;
	}

