#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
    int a;
    cout<<"Enter your size of an array:"<<endl;
    cin>>a;
    vector <int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int min_value = INT_MIN;
    for(int i=0;i<a;i++){
        if(b[i]>min_value){
            min_value = b[i];
        }
    }
    cout<<"Max Value in an array:"<<endl;
    cout<<min_value;
}