#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

bool hasUniqueNodes(Node* head) {
    if (head == nullptr) {
        return true; // An empty list is considered to have unique nodes
    }

    Node* current = head;
    while (current != nullptr) {
        Node* runner = current->next;

        while (runner != nullptr) {
            if (current->data == runner->data) {
                return false; // Found a duplicate
            }
            runner = runner->next;
        }

        current = current->next;
    }

    return true; // No duplicates found
}

int main() {
    // Create a sample linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2); // Not unique

    if (hasUniqueNodes(head)) {
        cout << "All nodes in the linked list are unique." << endl;
    } else {
        cout << "The linked list contains duplicate nodes." << endl;
    }

    // Don't forget to free the memory allocated for the linked list
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

