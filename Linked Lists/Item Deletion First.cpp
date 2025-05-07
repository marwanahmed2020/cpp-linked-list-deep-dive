#include <iostream>
#include "Linked List.h"
using namespace std;

/*
    Delete First
    How to delelte a node from the list ?



                     HEAD      2000           2800          1500           3600
                   [ 2000 ]>>[ 17 | 2800 ]>>[ 92 | 1500 ]>>[ 63 | 3600 ]>>[ 45 | NULL OR 0 ]>>NULL
                              data  link     data   link    data   link     data   link

                              TO Delete the first node you need: 
                              1. A pointer to the [ Head ] Node called current or temp , temp = head;
                              2. to check if the list in empty, if( head==NULL)
                              3.to save the address of the current head(we need to delete it after updating the list) [This will save the list from the damage or lost]
                              4.To move the head to the next node which is at this case is [ 92 | 1500 ] this will mean [ head=head->link ]
                              5.To DELETE the old head node(delete temp)
                              >>Each node is dynamically allocated on the heap

         Before Deletion:                                         After Deletion :
[ Heap ]                                                        [ Heap ]
0x2000:                                                         ❌ 0x2000: (freed memory)
+-------------+-------------+                                   0x2800:
| data: 17    | link: 0x2800|                                   +-------------+-------------+
+-------------+-------------+                                   | data: 92    | link: 0x1500|
                                                                +-------------+-------------+
0x2800:                                                         [ Stack ]
+-------------+-------------+                                   head → 0x2800  head=head-> link
| data: 92    | link: 0x1500|                                   temp → (dangling pointer or nullptr if nullified)
+-------------+-------------+

0x1500:
+-------------+-------------+
| data: 63    | link: 0x3600|
+-------------+-------------+

0x3600:
+-------------+-------------+
| data: 45    | link: NULL  |
+-------------+-------------+

[ Stack ]
head → 0x2000
temp → 0x2000          Node*temp=head;


 >>>>>>>>>delete temp;

>>>>>>>>>>Now we tell the system: "Free the memory at 0x2000".

>>>>>>>>>>>>This removes the node [17 | 2800] from the heap.

*********************Danger: temp still holds 0x2000, so it’s a dangling pointer unless we do temp = nullptr;.
*/


void LinkedList::DeleteFirst() {
    Node* temp;
    temp = head;       // temp → 0x2000
    if (head == NULL) cout << "The List is Empty" << endl;
    else {
        head = head->link; // Now head points to [92 | 1500]
        delete temp;
        temp = nullptr;
    }

}