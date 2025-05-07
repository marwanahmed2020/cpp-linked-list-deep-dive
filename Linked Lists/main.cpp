#include <iostream>
#include "Linked List.h"
using namespace std;


int main() {
	LinkedList l;
	l.Display();
	l.isFound(2);
	l.DeleteFirst();
	l.DeleteItem(3);
	l.Append(1);
	l.InsertFirst(2);
	l.InsertFirst(3);
	l.InsertFirst(4);
	l.Display();
	l.DeleteItem(3);
	l.Display();
	l.Append(10); // NOW LIST : 4 > 2 > 1 > 10
	l.Display();
	l.isFound(10);
	l.InsertFirst(22);
	l.Display();
	
}