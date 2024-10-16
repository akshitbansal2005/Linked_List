# Linked_List
```markdown
# Linked List  
**Experiment 17**  

## Contents  
- Aim  
- Software Used  
- Theory  
  - Definition  
  - Basic Operations  
  - Algorithms  
- Conclusion  

## Aim  
To use exception handling in linked lists.

## Software Used  
VS Code

## Theory  

### Definition  
A linked list is a fundamental data structure used to store a collection of elements. Unlike arrays, where elements are stored in contiguous memory locations, linked lists store elements in nodes scattered throughout memory. Each node contains two parts:  
- **Data**: The actual value of the element.  
- **Pointer (or Reference)**: A reference (or pointer) to the next node in the list.

### Types of Linked Lists  
- **Singly Linked List**: Each node points to the next node in the sequence, and the last node points to `NULL`.  
- **Doubly Linked List**: Each node points to both the next and the previous node, allowing traversal in both directions.  
- **Circular Linked List**: The last node points back to the first node, forming a circle. It can be singly or doubly linked.

Example:  
```cpp
struct Node {
    int data;
    Node* next;
};
```
Here, `data` stores the value of the element, and `next` is a pointer to the next node in the list.

### Basic Operations  
1. **Insertion**: Adding elements to the list  
   - At the beginning: Insert a node at the head of the list.  
   - At the end: Traverse the list and insert a node at the tail.  
   - At a specific position: Insert a node at a given position.
   
2. **Deletion**: Removing elements from the list  
   - From the beginning: Remove the head node.  
   - From the end: Traverse to the second-last node and set its next pointer to `NULL`.  
   - From a specific position: Remove the node at a given index.
   
3. **Traversal**: Visit each node in the list to process or display its data.  
4. **Searching**: Find an element in the list by comparing the value of each node’s data.  
5. **Reversing**: Reverse the order of nodes in the list.

### Sample Code for Basic Operations  

**Function to insert a node at the beginning**  
```cpp
void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}
```

**Function to insert a node at the end**  
```cpp
void insertAtEnd(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}
```

## Algorithms  

### Algorithm for Linked List Implementation  

1. **Step 1**: Define a Class for the Node  
   - Create a class `Link` to represent a node of the linked list.  
   - Inside the class:  
     - Declare an integer `data` to store the value of the node.  
     - Declare a pointer `next` of type `Link*` to store the address of the next node.

2. **Step 2**: Define the Constructor  
   - Create a constructor `Link(int num)` that takes an integer parameter.  
   - Set `data` equal to `num`.  
   - Initialize `next` to `NULL`, meaning that the current node doesn’t point to any other node.

3. **Step 3**: Create a Node in the Main Function  
   - In the main function, declare a pointer `l1` of type `Link*` and dynamically allocate memory for it using `new`.  
   - Initialize the node with the value 6 by calling the constructor.

4. **Step 4**: Print Node Data and Pointer to Next Node  
   - Use `cout` to print the value of the node (`l1->data`).  
   - Print the address stored in `next` using `l1->next`, which should be `NULL` for this node.

5. **Step 5**: End the Program  
   - Return `0` to indicate successful completion of the program.

### Algorithm for Adding a Node at the Beginning  

1. **Step 1**: Define the Node Class  
   - Create a class named `Node` to represent each node in the linked list.  
   - Inside the class:  
     - Declare an integer `value` to store the value of the node.  
     - Declare a pointer `next` of type `Node*` to point to the next node in the list.  
     - Define a constructor `Node(int data)` to initialize `value` and `next`.

2. **Step 2**: Define the Function to Insert at Head  
   - Define a function `insertAtHead(Node* &head, int value)` to insert a new node at the beginning of the list.  
   - Create a new `Node` object named `new_node` and initialize it with the value.  
   - Set the `next` pointer of `new_node` to the current `head`.  
   - Update `head` to point to `new_node`.

3. **Step 3**: Define the Function to Display the List  
   - Define a function `display(Node* head)` to print the elements of the linked list.  
   - Initialize a temporary pointer `temp` to `head`.  
   - While `temp` is not `NULL`:  
     - Print the value of the current node followed by `" -> "`.  
     - Move `temp` to the next node.  
   - After the loop, print `"NULL"` to indicate the end of the list.

4. **Step 4**: Implement the Main Function  
   - In the main function, declare a pointer `head` of type `Node*` and initialize it to `NULL`.  
   - Call `insertAtHead(head, 4)` to insert the value 4 at the head and display the list.  
   - Call `insertAtHead(head, 5)` to insert the value 5 and display the list again.  
   - Call `insertAtHead(head, 10)` to insert the value 10 and display the list.

5. **Step 5**: End the Program  
   - Return `0` to indicate successful completion of the program.

## Conclusion  
We learned the implementation of linked lists and performed basic operations, including insertion, traversal, and display, using exception handling techniques.
