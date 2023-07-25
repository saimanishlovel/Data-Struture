#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
    int a;
    cin>>a;
    vector <int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int key;
    cin>>key;
    for(int i=0;i<a;i++){
        if(key==b[i]){
             cout<<"found";
        }
    }
    return -1;
}
//time complexity of best case is if the element is found in first index is O(1)
//time complexity of worest case is if the element is found in last place or element is not found is O(n)
