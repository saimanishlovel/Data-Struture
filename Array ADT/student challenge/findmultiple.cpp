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

    int i =0;
    int difference = b[0] - 0;
    cout<<"The missing elements are : "<<" ";
    // while(i<a){
    //     if(b[i]-i==difference){
    //         i++;
    //     }
    //     else{
    //         cout<<b[i] - 1<< " " ;
    //         difference = b[i] - i;
    //         i++;
    //     }
    // }
    for(int i=0;i<a;i++){
        if(difference != b[i]-i){
            while(difference<b[i]-i){
                cout<<difference + i <<"  ";
                difference++;
            }
        }
    }
    return 0;
}