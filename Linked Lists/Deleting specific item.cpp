#include <iostream>
#include "Linked List.h"
using namespace std;
/*
         To DELETE specific item (node)
		 Thinking ?! Brainstorming??
		 i want first to find where is the item or info that i want to delete in the list
		 for example if i want to delete the node that has item [63]
		 i need to find its address on the heap to delete it 
		 so.. i need to traverse the list to find the item [63] then finding its link>> address
		

					 HEAD      2000           2800          1500           3600
				   [ 2000 ]>>[ 17 | 2800 ]>>[ 92 | 1500 ]>>[ 63 | 3600 ]>>[ 45 | NULL OR 0 ]>>NULL
							  data  link     data   link    data   link     data   link
         
		 
		i will create 2 pointers one called perv to connect the prev node to the node after the deleted one
		like if i deleted node 63 , so i want to connect the node 92 to 45
		so i need to change the likn of node 92 to link=3600        so this in code : prev->link=current->link as the node[ 63 | 3600 ] has the address of the next node that i want to connect

		i have some cases :
		1. if the empty list 
		2. if deleting the first list
		3. if Not found

*/
void LinkedList::DeleteItem(int item) {
	
	// ** important ** DONT WRITE THIS LINE HERE BEACUSE THE PROGRAM WILL CRASH >> current = head->link; 
	// BECAUSE head->link has garbage value    >>   ❌ CRASH: you're dereferencing a garbage pointer
	// i need to check first if the list is not empty to execute this line

	// case 1 : Empty List
	if (head == NULL) {
		cout << "List is Empty" << endl;
		return;
	}

	// case 2 : Deletion The first Node
	if (head->info == item) {
		Node* temp = head;
		head = head->link; // Move Forward
		delete temp;
		return;
	}
	Node* current, * prev;
	prev = head;
	current = head->link; // ***

	// case 3 : traverse find the node
	while (current != NULL && current->info != item) {
		prev = current;
		current = current->link;
	}

	// case 4 : Not Found
	if (current == NULL) {
		cout << "Item Not Found" << endl;
		return;
	}

	// deletion
	//connevtion the prev to the next node

	prev->link = current->link;
	delete current;

}