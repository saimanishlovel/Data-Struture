#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector <int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    for(int i=0;i<a;i++){
        cout<<b[i];
    }
    return 0;
}