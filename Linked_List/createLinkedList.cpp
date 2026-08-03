using namespace std;
#include <iostream>
#include <vector>

//defining the node class.
class Node {
    public:
        int data;
        Node *next;

        Node(int value) {
            data = value;
            next = NULL;
        }
};

int main() {
    vector<int> v = {10,20,30,40,50};
    Node *head = NULL;
    Node *tail = head;
    // head = new Node(5);   // creating a node.

    for(int i=0; i<v.size(); i++) {
        if(head == NULL) {
            head = new Node(v[i]);
            tail = head;
        }
        else {
            tail -> next = new Node(v[i]);
            tail = tail -> next;
        }
    }


    //printing the linked list.
    Node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}