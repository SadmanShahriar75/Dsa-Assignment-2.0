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

void insert_at_any_position(Node* &head,int idx){
    Node* temp = head;
    for(int i=0; i<idx-1; i++){
         temp = temp->next;
         
    }
    Node* deletenode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev=temp;
    delete deletenode;




}


void print_linkedlist(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val <<endl;
        temp = temp->next;
    }
    cout << endl;
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


    insert_at_any_position(head,1);

    
    print_linkedlist(head);
    
    return 0;
}