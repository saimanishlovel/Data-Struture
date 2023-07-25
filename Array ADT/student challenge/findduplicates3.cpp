//find duplicates using hashing 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector <int> b(a);
    
    int max = INT_MIN;

    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    for(int i=0;i<a;i++){
      if(b[i]>max){
        max=b[i];
      }

    }
    vector <int> c(max);
    for(int i=0;i<a;i++){
        c[b[i]]++;
    }
    for(int i=1;i<max;i++){
        if(c[i]>1){
            cout<<"The duplicate element is :"<<i<<" "<<"and it is duplicated "<<c[i]<<" times."<<endl;
        }
    }
    return 0;
}