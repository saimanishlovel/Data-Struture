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
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            if(b[j]>b[j + 1]){
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
}
        } 
    }
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}