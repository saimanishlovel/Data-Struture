#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void swap(int a,int b){
        int temp;
        temp=a;
        a=b;
        b=temp;
}
int result(int size,int key){
        vector <int> b(size);
    for(int i=0;i<size;i++){
        cin>>b[i];
    }
    for(int i=0;i<size;i++){
        if(key==b[i]){
             return i;
             //swap(b[0],b[i]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<b[i]<<" ";
    }
    return -1;
}
int main(){
    int a;
    cin>>a;
    int key;
    cin>>key;
    int r= result(a,key);
    cout<<r;
    
}
//time complexity of best case is if the element is found in first index is O(1)
//time complexity of worest case is if the element is found in last place or element is not found is O(n)
