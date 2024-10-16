#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

Node(int data) {
        value = data;
        next = NULL;
    }
};

// Function to insert a new node at the head of the list
void insertAtHead(Node* &head, int value) {
    Node* new_node = new Node(value);
new_node->next = head;
    head = new_node;
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
cout<< temp->value << " -> ";
        temp = temp->next;
    }
cout<< "NULL" <<endl;
}

int main() {
    Node* head = NULL; // Initialize head to NULL

insertAtHead(head, 4); // Insert 4 at the head
    display(head); // Display the list

insertAtHead(head, 5); // Insert 5 at the head
    display(head); // Display the list again

insertAtHead(head, 10); // Insert 10 at the head
    display(head); // Display the list again

    return 0;
}
//Output
/*4 -> NULL
5 -> 4 -> NULL
10 -> 5 -> 4 -> NULL*/
