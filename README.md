## 🚀 Project Features:
```
    HEAD      2000           2800          1500           3600
[ 2000 ]>>[ 17 | 2800 ]>>[ 92 | 1500 ]>>[ 63 | 3600 ]>>[ 45 | NULL ]>>NULL
          data  link     data   link     data   link     data   link
```
- **Heap/Stack interactions**: Detailed visualization of how memory is allocated on the heap and the stack during linked list operations.
- **Pointer Safety**: How pointers interact with memory and how dangling pointers or invalid memory access can be avoided.
- **Step-by-Step Memory Allocation/Deallocation**: Visualizations of memory allocation during insertion, and memory deallocation during deletion.

## 🔧 Files Overview:
The project is organized into the following files:

- **Header Files:**
  - `linkedlist.h`: Defines the linked list structure and methods.
  - `node.h`: Defines the node structure used in the linked list.

- **Source Files:**
  - `deleting_specific_item.cpp`: Handles deletion of a specific item from the linked list.
  - `displaying_items.cpp`: Implements traversal and display functionality for the linked list.
  - `insert_item_last_append.cpp`: Handles inserting items at the end of the linked list.
  - `item_deletion_first.cpp`: Implements deletion of the first item in the linked list.
  - `item_insertion_first.cpp`: Implements insertion of the first item in the linked list.
  - `main.cpp`: The entry point for the program, tying everything together.

## 🧠 Memory Visualization:

### Linked List Structure (Heap Allocation & Stack Representation)
Consider the following linked list visualized in memory:


```
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
```

