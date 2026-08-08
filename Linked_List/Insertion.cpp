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
class solution
{
public:
    Node *InsertAtPosition(Node *&head, int pos, int n)
    {
        Node *curr = head;
        if (head != NULL)
        {
            if(pos==1) {
                Node *temp = new Node(n);
                temp -> next = head;
                head = temp;
                return head;
            }
            while (--pos)
                curr = curr->next;

            Node *ins = new Node(n);
            ins->next = curr->next;
            curr->next = ins;
        }
        
        else {
            head = new Node(n);
        }
        return head;
    }
};