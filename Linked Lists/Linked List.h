#pragma once
#include "Node.h"
#include <iostream>


class LinkedList {
public:
	Node* head;

	LinkedList() {
		head = NULL;
	}
	void Display();
	void isFound(int info);
	void InsertFirst(int newitem);
	void DeleteFirst();
	void DeleteItem(int item);
	void Append(int newitem);
};