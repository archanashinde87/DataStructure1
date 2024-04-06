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

bool search(Node* head, int input)
{
    Node* temp = head;
    while(temp!=nullptr)
    {
        if(temp->data == input)
        {
            std::cout << "Given element " <<input << " is found.\n";
            return true;
        }
        temp=temp->next;
    }
    return false;
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
    
    search(head,50);
    
    return 0;
}
// Result
/*
20 10 40 30 50
Given element 50 is found.
*/
