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
void printAllLinked(Node *head){
    Node *tmp = head;
    cout<<"Your List is : ";
    while(tmp!=NULL){
        
        cout<<tmp->val<<" ";
        tmp= tmp->next;

    }
}

void insert_at_tail(Node *&head,int val){
    // cout<<"Your new tail is: ";
    Node *newNode = new Node(val);
    if(head==NULL){
        head= newNode;
        return;
    }
    Node *tmp= head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
        
    }
    tmp->next= newNode;
    
    return;

}

void insert_at_any(Node *head,int pos,int v){
    Node *newNode=new Node(v);
    Node *tmp = head;
    for(int i=0;i<pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<"Inserted at position: "<<pos<<endl;
    return;

}

void insert_head(Node *&head,int v){
    Node *newNode = new Node(v);
    newNode->next= head;
    head=newNode;
    cout<<"inserted head"<<endl;
}

void delete_node(Node *head,int pos){
    Node *tmp = head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    tmp->next=tmp->next->next;
    cout<<"deleted at position : "<<pos<<endl;
}
 
int main() {
    Node *head = NULL;
    
    
    while(true){
        cout<<"insert a option: ";
        int op;
        cin>>op;
        if(op==1){
        cout<<"insert a value: ";
        int v;
        cin>>v;
        insert_at_tail(head,v);
        }
        if(op==2) break;
        if(op==3) printAllLinked(head);
        if(op==4){
            int pos,v;
            cin>>pos>>v;
            insert_at_any(head,pos,v);
        }
        if(op==5){
            int v;
            cout<<"enter value"<<endl;
            cin>>v;
            insert_head(head,v);
        }
        if(op==6){
            int pos;
            cout<<"Enter position for delete: "<<endl;
            cin>>pos;
            delete_node(head,pos);
        }
       
    }
    
    
    

    return 0;
}