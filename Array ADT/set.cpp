#include <iostream>
using namespace std;
 #include <bits/stdc++.h>
 void sets(int index,int key){
    int a;
    cout<<"Enter your size of an array:"<<endl;
    cin>>a;
    vector <int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];

    }
      if (index > 0 && index < a)
    {
        b[index] = key ;

    }
    else{
        cout<<"No Change"<<endl;
    }
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";

    }
    
 }
 int main(){
    int index,key;
    cout<<"Enter your index value:"<<endl;
    cin>>index;
    cout<<"Enter your key value:"<<endl;
    cin>>key;
    sets(index,key);
    return 0;
 }