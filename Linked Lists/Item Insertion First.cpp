#include <iostream>
#include "Linked List.h"
using namespace std;
/*
 /*
  The insertion of a new node requires a few key steps, and understanding the memory management is essential.

  **Creating a Node on the Heap**:
  When we create a node, the following happens:
    - Using `new Node` allocates memory on the **heap**, not on the **stack**.
    - The pointer to this memory (i.e., the address of the new node) is stored on the **stack**.

  Example:
  ```cpp
  Node* newNodePtr = new Node;      // Creates a new node on the heap
  newNodePtr->info = 50;            // Assigns data to the node
  newNodePtr->link = nullptr;       // Initializes the link to nullptr (as it's the first node)

[ Heap ]
0xA100:
+-------+------------+
| data: 50           |
| link: NULL         |
+--------------------+
[ Stack ]
newNodePtr → 0xA100

         if the list is empty head->NULL
         so when inserting new item , the newNodePtr->link=head , which is at this case NULL
         then the head will be assigned to newNodePtr to store the address of the new Node

              
*/
void LinkedList::InsertFirst(int newitem) {
    Node* newNodePtr;
    newNodePtr = new Node;
    newNodePtr->info = newitem;
    newNodePtr->link = head;    // in both cases empty or not , ** because [ new ] automatically initialze link new node to nullptr
    head = newNodePtr;
}