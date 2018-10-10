#include <stdio.h>
#include "list.h"
#include <stdlib.h>

void print_list(struct node *list)
{
	printf("====START OF LIST====\n");
	//creates a variable to store the value of list
	//so lit itself does not change
	struct node *current = list;
		
	//as long as the current node is not NULL
	while(current)
	{
		//print the value of the current node, then set the current
		//node to the next one in the linked list
		printf("%d\n", current->i);	
		current = current->next;
	}

	printf("====END OF LIST====\n");
}

struct node * insert_front(struct node *list, int value)
{
	//make a new node, assign it the value given
	struct node *new_first = malloc(sizeof(struct node));
	new_first->i = value;	
	//set it's next variable to the list given, since that 
	//is the first node
	new_first->next = list;
	//return the new list
	return new_first;
}

struct node *free_list(struct node *list)
{
	//as long as the list isn't null
	while(list)
	{
		//makes a temp variable to store the next value
		struct node *temp = list->next;
		free(list);	//frees the old value
		//set the list to the next value
		list = temp;
	}
	//return the now-empty list
	return list;
}
