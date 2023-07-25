//check array is it sorted or not
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
bool checksort(vector<int> &b){
    for(int i=0;i<b.size()-1;i++){
        if(b[i]>b[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    cin>>a;
    vector <int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    bool G = checksort(b);
    cout << G << endl;
    
}