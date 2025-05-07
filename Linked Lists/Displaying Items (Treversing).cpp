#include <iostream>
#include "Linked List.h"
using namespace std;

/*
to travers all items ==> i need to create a new pointer called temp or current which will start to point at the first node that
Head pointer is pointing to
===> current =Head;               
    why not traversing with the Head pointer ?? ==> because this will cause of losing the start of the LinkedList and will damage it                                  
    [IMPORTANT]==>  If we move head to the second node, the first node
                       is lost (unless we save a pointer to this node).
SO WE WANT THE Pointer>>Current to traverse through all the node till it points to >>[ NULL ]

                     HEAD      2000           2800          1500           3600
                   [ 2000 ]>>[ 17 | 2800 ]>>[ 92 | 1500 ]>>[ 63 | 3600 ]>>[ 45 | NULL OR 0 ]>>NULL
                              data  link     data   link    data   link     data   link
                               
              let current=2000              when current->info  = 17
                                                   current->link  = 2800
                                                   current->link->info = 92

             so..   current =current->link  [ this line means the node that the head is points to, can access its link and be assigned to it ]

*/ 

void LinkedList::Display() {
    Node* current;
    current = head;
    cout << "head >> ";
    while (current != NULL || current != nullptr) {
        cout << current->info<<" >> ";
        current = current->link;
    }
    cout << "NULL" << endl;
}

/*
      we can implement another function that is also related to traversing idea and concept

      if i want to find a spcific node, what i do ? ==> traversing all the list till i find it

      function >> [ isFound ] return boolean
      
      but i want it efficient i will make it void return nothing , i will simply print Found! or Not Found!
      
      it takes the info or data as parameter

*/

void LinkedList::isFound(int info) {
    Node* current;

    current = head;
    while (current != NULL) {
        if (current->info == info) {
            cout << "The Item : " << current->info << " Is Found!" << endl;
            return;
        }
        current = current->link;
    }
    cout << "The Item : " << info << " Is Not Found!" << endl;
}