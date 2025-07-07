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

void insert_at_anyposition(Node* &head,int idx, int val){
    Node* newnode = new Node(val);
     Node* temp = head;
     for(int i=0; i<idx-1; i++){
         temp = temp->next;
         
     }
     newnode->next = temp->next;
     temp->next = newnode;
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
    
    insert_at_anyposition(head,2,100);

    
    print_linkedlist(head);
    
    return 0;
}