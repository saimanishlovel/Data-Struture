#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of the array : ";
    int a;
    cin>>a;
    vector <int> b(a);
    cout<<"Enter the element : "<<endl;
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    cout<<"Element before insertion sort : ";
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }
    for(int i=1;i<a;i++){
        int j=i-1;
        int x=b[i];
        while(j>-1 && x<b[j]){
            b[j+1]=b[j];
            j--;
        }
        b[j+1]=x;
    }
cout<<"Element after insertion sort : ";
for(int i=0;i<a;i++){
    cout<<b[i]<<" ";
}
}