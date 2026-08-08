#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Solution
{
    // delete end node
public:
    void deleteEndNode(Node *&head)
    {
        Node *curr = head;
        Node *prev = NULL;
        if (head != NULL)
        {
            // only 1 node exits
            if (curr->next == NULL)
            {
                head = NULL;
                delete curr;
                return;
            }
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete curr;
        }
    }

    // delete front node
public:
    void deleteFrontNode(Node *&head)
    {
        Node *temp = head;
        if (head->next != NULL)
        {
            head = head->next;
            delete temp;
        }
        else
        {
            head = NULL;
            delete temp;
        }
    }

    // delete at any given position.
public:
    void deleteAtposition(Node *&head, int pos)
    {
        if (head != NULL) // no element exists
        {
            if (pos == 1)   // deleteion at first place
            { 
                Node *temp = head;
                head = head->next;
                delete temp;
                return;
            }
            Node *curr = head;
            pos--;
            while (--pos)
                curr = curr->next;
            Node *temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
    }
};