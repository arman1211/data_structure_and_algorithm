#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
};

 
int main() {

    Node a,b;
    a.val = 28;
    b.val = 22;
    a.next = &b;
    b.next = NULL;
    cout<<a.next->val;

    return 0;
}