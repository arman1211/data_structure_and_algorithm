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
int size_list(Node *head){
    int cnt=0;
    Node *tmp = head;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void print_forward(Node *head){
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail){
    Node *tmp = tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

void insert_at_tail(Node *&head,Node *&tail,int val){
    Node* newNode = new Node(val);
    Node *tmp = tail;
    if(head==NULL){
        head=newNode;
        tail= newNode;
        return;
    }
    tmp->next= newNode;
    newNode->prev = tmp;
    tail = tmp->next;

}

void insert_at_pos(Node *head,int val,int pos){
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=0;i<pos-1;i++){
        tmp = tmp->next;
    }
    newNode->next= tmp->next;
    tmp->next->prev= newNode;
    tmp->next = newNode;
    newNode->prev=tmp;
}
void insert_head(Node *&head,int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head->prev= newNode;
    head = newNode;

}
void delete_at_any(Node *head,int pos){
    Node *tmp = head;
    for(int i=0;i<pos-1;i++){
        tmp=tmp->next;
    }
    Node *deletedNode = tmp->next;
    tmp->next->next->prev= tmp;
    tmp->next = tmp->next->next;
    delete deletedNode;
}
void delete_head(Node *&head){
    Node *deleteNode = head;
    head = head->next;
    head->prev=NULL;
    delete deleteNode;
}
void delete_tail(Node *&tail){
    Node *deletedNode = tail;
    tail= tail->prev;
    tail->next= NULL;
    delete deletedNode;
}

 
int main() {
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cout<<"Inset a option: "<<endl;
        int op;
        cin>>op;
        if(op==1){
            cout<<"Value: ";
            int val;
            cin>>val;
            insert_at_tail(head,tail,val);
        }
        if(op==2){
            cout<<"Enter value and position: ";
            int val,pos;
            int size = size_list(head);
            cin>>val>>pos;
            if(pos==0) insert_head(head,val);
            else if(pos>= size) cout<<"Invalid index";
            else insert_at_pos(head,val,pos);
        }
        if(op==3){
            cout<<"insert pos for delete: ";
            int pos;
            int size = size_list(head);
            cin>>pos;
            if(pos==0) delete_head(head);
            else if(pos == size -1 ) delete_tail(tail);
            else if(pos>= size) cout<<"Invalid index";
            else delete_at_any(head,pos);
        }
        if(op==7) print_forward(head);
        if(op==8) print_reverse(tail);

        if(op==9) break;
    }
    
      
    return 0;
}