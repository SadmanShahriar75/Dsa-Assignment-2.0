#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};

void insert_at_anyposition(Node* &head,int idx, int val){
    Node* newnode = new Node(val);
     Node* temp = head;
     for(int i=0; i<idx-1; i++){
         temp = temp->next;
         
     }
     newnode->next = temp->next;
     temp->next->prev = newnode;

     temp->next = newnode;
     newnode->prev = temp;
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
    Node* a = new Node(20);
    Node* b = new Node(30);
    
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;


    insert_at_anyposition(head,2,300);

    
    print_linkedlist(head);
    
    return 0;
}