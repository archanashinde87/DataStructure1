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

void insertAfterNode(Node* prevNode, int value)
{
    if(prevNode==nullptr)
    {
        std::cout << "The given previous node cannot be NULL.\n";
        return;
    }
    Node* new_Node = new Node();
    new_Node->data = value;
    new_Node->next = prevNode->next;
    prevNode->next = new_Node;
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
    
    insertAfterNode(head, 60);
    
    printLL(head);
    
    return 0;
}