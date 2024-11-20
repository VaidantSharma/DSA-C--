#include <iostream>
using namespace std;

class Node
{
public:
    int Data;
    Node *next;

    Node(int val)
    {
        Data = val;
        next = NULL;
    }
};

void InsertAtHead(Node **head, int val)
{
    Node *n = new Node(val);
    n->next = *head;
    *head = n;
}

bool Search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->Data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void InsertAtTail(Node **head, int val)
{
    Node *n = new Node(val);
    if (*head == NULL)
    {
        *head = n;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    InsertAtTail(&head, 1);
    InsertAtTail(&head, 2);
    InsertAtTail(&head, 3);
    Display(head);
    InsertAtHead(&head, 4);
    InsertAtHead(&head, 5);
    InsertAtHead(&head, 6);
    Display(head);
    cout << Search(head, 5) << endl;
    cout << Search(head, 9) << endl;

    return 0;
}