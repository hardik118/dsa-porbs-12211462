#include <iostream>
using namespace std;

// Define a node structure for the doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Constructor to initialize the linked list
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Function to insert a node in sorted order
    void insertSorted(int data) {
        Node* newNode = new Node{data, nullptr, nullptr};

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else if (data <= head->data) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else if (data >= tail->data) {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        } else {
            Node* temp = head->next;
            while (temp->data < data) {
                temp = temp->next;
            }
            newNode->next = temp;
            newNode->prev = temp->prev;
            temp->prev->next = newNode;
            temp->prev = newNode;
        }
    }

    // Function to display the linked list
    void displayList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    DoublyLinkedList studentList;

    for (int i = 0; i < n; i++) {
        int rollNumber;
        cin >> rollNumber;
        studentList.insertSorted(rollNumber);
    }

    cout << "Created Doubly Linked List:" << endl;
    studentList.displayList();

    return 0;
}

