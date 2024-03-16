#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void print_list(Node *head){
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void reverse_list(Node *&head,Node *&tail){
    Node *i = head;
    Node *j = tail;
    while(i!=j){
        swap(i->val,j->val);
        i= i->next;
        j=j->prev;

    }
}

void insert_at_tail(Node *&head,Node *&tail, int val){
    Node *newNode = new Node(val);
    Node *tmp = tail;
    if(head == NULL){
        head= newNode;
        tail = newNode;
        return;
    }
    tmp->next= newNode;
    newNode->prev= tmp;
    tail= newNode;
    
    
}
 
int main() {
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        int v;
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head,tail,v);
        
    }
    reverse_list(head,tail);
    print_list(head);
      
    return 0;
}