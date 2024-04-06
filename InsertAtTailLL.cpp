#include<iostream>

class Node
{
public:
    int m_data;
    Node* m_pNext;
    Node(int data) : m_data{data},m_pNext{nullptr}
    {}
};

void insertAtTail(Node** head, int value)
{
    Node* new_Node = new Node(value);
    if(*head==nullptr)
    {
        *head = new_Node;
        return;
    }
    Node* temp = *head;
    while(temp->m_pNext!=nullptr)
    {
        temp = temp->m_pNext;
    }
    temp->m_pNext = new_Node;
}

void printLL(Node* head)
{
    Node* temp = head;
    while(temp!=nullptr)
    {
        std::cout << temp->m_data << " ";
        temp = temp->m_pNext;
    }
    std::cout << std::endl;
}

void pushAtFront(Node** head, int value)
{
    Node* new_Node = new Node(value);
    new_Node->m_pNext = *head;
    *head = new_Node;
}

int main()
{
    Node* head = nullptr;
    pushAtFront(&head, 10);
    pushAtFront(&head, 400);
    pushAtFront(&head, 50);
    pushAtFront(&head, 60);
    printLL(head);
    
    insertAtTail(&head, 20);
    printLL(head);
    
    return 0;
}

// Result
/*
60 50 400 10 
60 50 400 10 20 
*/