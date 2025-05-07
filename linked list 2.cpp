#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int data;

    Node* newNode = NULL;
    Node* head = NULL;
    Node* temp = NULL;

    // Insert 5 integers into the linked list
    for (int i = 0; i < 5; i++) {
        cout << "Enter data " << i + 1 << ": ";
        cin >> data;
        newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode; // If list is empty, set new node as head
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode; // Add the new node to the end
        }
    }

    // Display the current list
    cout << "The Current List: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Check if the list is empty before deletion
    if (head == NULL) {
        cout << "The list is empty. Cannot delete." << endl;
        return 0;
    }

    // Delete the first node
    cout << "Deleting the first node" << endl;
    if (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Display the list after deletion
    cout << "The list after deletion: ";
    temp = head;
    while (temp != NULL) { // Use temp for traversal
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Search for data in the list
    cout << "Enter a data to search: ";
    cin >> data;
    temp = head;
    bool found = false;
    while (temp != NULL) {
        if (temp->data == data) {
            found = true;
            break;
        }
        temp = temp->next;
    }
    if (found) {
        cout << "DATA FOUND!" << endl;
    } else {
        cout << "DATA NOT FOUND!" << endl;
    }

    return 0;
}

