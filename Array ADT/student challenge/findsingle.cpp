//find the single missing element in series starting with 1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum = 0;
    vector <int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
        sum = sum + b[i];
    }
    int actualsum = (b[a-1]*(b[a-1]+1))/2;
    int missing_element = actualsum -sum;
    cout<<"The missing element in the array is : "<<missing_element<<endl;

   
    return 0;
}