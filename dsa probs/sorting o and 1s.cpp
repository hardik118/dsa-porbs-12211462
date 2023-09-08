#include <iostream>
using namespace std;
struct ListNode {
    int value;
    ListNode* next;

    ListNode(int val) : value(val), next(nullptr) {}
};
ListNode* sort(ListNode* head) {
    if (!head || !head->next) {
        return head;
    }

    ListNode* zeroHead = new ListNode(0);  
    ListNode* oneHead = new ListNode(1);  
    ListNode* zeroTail = zeroHead;
    ListNode* oneTail = oneHead;

    ListNode* temp = head;

    while (temp) {
        if (temp->value == 0) {
            zeroTail->next = temp;
            zeroTail = zeroTail->next;
        } else {
            oneTail->next = temp;
            oneTail = oneTail->next;
        }
        current = temp->next;
    }

   
    zeroTail->next = oneHead->next;
    
    oneTail->next = nullptr;

    ListNode* sortedHead = zeroHead->next;

   
    delete zeroHead;
    delete oneHead;

    return sortedHead;
}
void printlist(listnode* head){
	***
}
int main() {
    ListNode* head = new ListNode(0);
    head->next = new ListNode(1);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(1);
    head->next->next->next->next = new ListNode(0);


    ListNode* sortedHead = sort(head);

    cout << "Sorted linked list of 0s and 1s:" << endl;
    printList(sortedHead);
    ListNode* temp = sortedHead;
    while (temp) {
        ListNode* next = temp->next;
        delete temp;
        temp = next;
    }

    return 0;
}
