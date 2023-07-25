#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];


    a[0]=1;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    cout<<"The values of array is:"<<endl;
    for(int j=0;j<n;j++){
              cout<<a[j]<<endl;
    }
    
    











    // a[1]=34;
    // a[0]=32;
    // cout<<a[0]<<endl;
    // cout<<a[3]<<endl;
    cout<<"Size of Array is"<<sizeof(a)<<endl;

}