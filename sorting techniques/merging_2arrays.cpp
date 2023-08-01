#include <bits/stdc++.h>
using namespace std;
void merge_sort(vector <int> m,vector <int> n, int a,int b){
    vector <int> c(a+b);
    int i=0,j=0,k=0;
    while(i<a || j<b){
        if(m[i]<=n[j]){
            c[k++] = m[i++];
        }
        else{
            c[k++]=n[j++];
        }
    }
    cout<<"Sorted element of 2 arrays is : ";
    for(int h=0;h<a+b;h++){
        cout<<c[h]<<" ";
    }
}
int main(){
    cout<<"Enter the size of first sorted array : ";
    int a;
    cin>>a;
    cout<<endl;
    cout<<"Enter the size of secont sorted array : ";
    int b;
    cin>>b;
    vector<int> m(a);
    vector <int> n(b);
   
    cout<<"Enter the element of first sorted array : "<<endl;
    for(int i=0;i<a;i++){
        cin>>m[i];
    }
    cout<<"Enter the element of second sorted array : "<<endl;
    for(int i=0;i<b;i++){
        cin>>n[i];
    }
    merge_sort(m,n,a,b);
}