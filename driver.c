#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
	//declare the nodes of the linked list
	struct node *node0 = malloc(sizeof(struct node));
	struct node *node1 = malloc(sizeof(struct node));
	struct node *node2 = malloc(sizeof(struct node));

	//give each node a value
	node0->i = 100;
	node1->i = 200;
	node2->i = 300;
	//set the next node for each node
	node0->next = node1;
	node1->next = node2;
	node2->next = NULL;
	//test the print_list() function
	print_list(node0);	

	//create a new node to insert at the beginning of the list
	struct node *new_node0 = insert_front(node0, 50);
	print_list(new_node0);

	//testing the free_list() function
	print_list(free_list(new_node0));
	
}
