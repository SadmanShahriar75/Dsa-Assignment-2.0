#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int val){
       this->val = val;
       this->next = NULL;
    }
};

void insert_at_head(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}


void print_linkedlist(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val <<endl;
        temp = temp->next;
    }
}


int main()
{
    Node* head = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    
 
    head->next = b;
    b->next = c;
    
    insert_at_head(head,100);
    insert_at_head(head,200);
    insert_at_head(head,400);
    
    print_linkedlist(head);
    
    return 0;
}