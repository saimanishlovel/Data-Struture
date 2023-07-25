//inserting element in the sorted array
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
    int a;
    cin>>a;
    vector <int> b(a+1, 0);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int key = 5;
    int i = a - 1;
    while(b[i]>key){
        b[i+1] = b[i];
        i--;
    }
    b[i+1] = key ;
    for(int i=0;i<=a;i++){
        cout<<b[i]<<" ";
    }
}