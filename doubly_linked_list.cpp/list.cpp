#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    list <int> myList;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        myList.push_back(v);
    }
    myList.sort();
    myList.remove(2);

    for(int val:myList) cout<<val<<" "; 
    return 0;
}