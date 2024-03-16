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
 
int main() {
    Node a(20),b(33),c(76);
    // Node b(45);
    // Node c(55);
    Node *f=new Node(90);
    Node *g=new Node(86);
    f->next= g;
    a.next = &b;
    b.next = &c;
    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    cout<<a.next->next->val<<endl;
    cout<<b.next->next<<endl;
    cout<<f->val<<endl;
    cout<<f->next->val<<endl;
      
    return 0;
}