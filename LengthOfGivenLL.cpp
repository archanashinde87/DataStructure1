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

int getCount(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp!=nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
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
    
    printLL(head);
    
    std::cout << "Length of given LL is : " << getCount(head) << std::endl;
    
    return 0;
}
// Result
/*
20 10 40 30 50
Length of given LL is : 5
*/
