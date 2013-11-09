#include <iostream>
#include <stdio.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};


// Insert function to insert into the tail of the linked list
// Returns a pointer to the head of the new linked list
Node* Insert(Node *head, int data) {
    // Create a temp node and initialize it with desired data
    Node *temp = new Node;
    temp-> data = data;
    temp-> next = NULL;

    // Is head NULL?
    if(head == NULL) {
        // Initialize
        return temp;
    } else  {
        // Anothe temp to store the first temp
        Node *temp1 = temp;
        temp = head;
        // Seek to last node
        while(temp->next != NULL) {
            temp = temp->next;
        }
        // Insert new value into the *next of the last node
        temp->next = temp1;
        return head;
    }
}

int main( void ) {
    Node *head = new Node;
    // Start out as NULL
    head = NULL;
    head = Insert(head, 1);
    head = Insert(head, 2);
    head = Insert(head, 3);
    head = Insert(head, 4);
    head = Insert(head, 5);

    // Print out data in linked list
    while(head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }
}

