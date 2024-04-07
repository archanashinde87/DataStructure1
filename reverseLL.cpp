#include<iostream>

class Node
{
public:
    int data;
    Node* next;
};

void pushAtFront(Node** head, int value)
{
    Node* new_Node = new Node();
    new_Node->data = value;
    if(*head==nullptr)
    {
        new_Node->next = nullptr;
        *head = new_Node;
        return;
    }
    new_Node->next = *head;
    *head = new_Node;
}

void reverseLL(Node** head)
{
    Node* current = *head;
    Node* prevNode = nullptr;
    Node* nextNode = nullptr;
    while(current!=nullptr)
    {
        nextNode = current->next;
        current->next = prevNode;
        prevNode = current;
        current = nextNode;
    }
    
    *head = prevNode;
}

void printLL(Node* head)
{
    Node* temp = head;
    while(temp!=nullptr)
    {
        std::cout << " " << temp->data;
        temp = temp->next;
    }
    
    std::cout << std::endl;
}

int main()
{
    Node* head = nullptr;
    pushAtFront(&head, 50);
    pushAtFront(&head, 30);
    pushAtFront(&head, 40);
    pushAtFront(&head, 10);
    pushAtFront(&head, 20);
    std::cout << "Before: ";
    printLL(head);
    
    reverseLL(&head);
    std::cout << "After Reverse: ";
    printLL(head);
    return 0;
}
// Result
/*
Before: 20 10 40 30 50
After Reverse: 50 30 40 10 20
*/
