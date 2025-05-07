#include <iostream>
#include "Linked List.h"
using namespace std;

/*

            [ Inserting Last ]


					 HEAD      2000           2800          1500           3600
				   [ 2000 ]>>[ 17 | 2800 ]>>[ 92 | 1500 ]>>[ 63 | 3600 ]>>[ 45 | NULL OR 0 ]>>NULL
							  data  link     data   link    data   link     data   link

							  i need to travese the list to find the node that has a link pointer points to >>NULL
							  then.. connect the last node that has a pointer pointed to null to the address of the new node

							  i have a case here , if the list is empty

*/

void LinkedList::Append(int newitem) {
	if (head == NULL) {
		Node* newnode; // newnode is pointer points to node , its on the stack and takes the address of the node that is on the heap
		newnode = new Node;
		newnode->info = newitem;
		newnode->link = head;
		head = newnode;
		return;
	}

	// if the list is not empty

	Node* newnode,*current;
	newnode = new Node;
	newnode->info = newitem;
	newnode->link = NULL; // ***
	current = head;
	while (current->link != NULL) {
		current = current->link;
	}
	// ** very important not to forget connecting the last node to the newode
	current->link = newnode;
}