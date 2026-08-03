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
public:
    void deleteEndNode(Node *&head)
    {
        Node *curr = head;
        Node *prev = NULL;
        if (head != NULL)
        {
            // only 1 node exits
            if(curr -> next == NULL) {
                head = NULL;
                delete curr;
                return;
            }
            while (curr -> next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete curr;
        }
    }
};