//find min and max value in a single search
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
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<a;i++){
        if(b[i]<min){
            min = b[i];
        }
        if(b[i]>max){
            max = b[i];
        }
    }
    cout<<"The maximum element is : "<<max<<endl;
    cout<<"The minimum elment in the array is : "<<min;
    
    return 0;
}
