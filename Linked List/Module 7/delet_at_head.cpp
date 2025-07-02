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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    
    if(head == NULL){
        head = newnode;
        tail = newnode; 
        return;
    }
    tail->next=newnode;
    tail = tail->next;
   
}


void print_linkedlist(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val <<endl;
        temp = temp->next;
    }
}


void delet_at_head(Node* &head){
    Node* deletnode = head;
    head = head->next;
    delete deletnode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

 
    int val;
    while (true)
    {
      cin >> val;
      if(val == -1){
        break;
      }
       insert_at_tail(head,tail,val);
    }
    
    delet_at_head(head);
    print_linkedlist(head);
    
    return 0;
}