#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};

void print_list(Node *head){
    int c=0;
    Node *tmp = head;
    while(tmp!=NULL){
        
        
        tmp=tmp->next;
        
    }
    
    cout<<c<<" ";
}

void insert_tail(Node *&head,int v){
    Node *newNode = new Node(v);
    Node *tmp = head;
    if(head==NULL){
        head=newNode;
        return;
    }
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next= newNode;

}

 
int main() {
    Node *head = NULL;
    while(true){
        int v;
        cin>>v;
        if(v==-1) break;
        insert_tail(head,v);

    }
    print_list(head);
    
      
    return 0;
}