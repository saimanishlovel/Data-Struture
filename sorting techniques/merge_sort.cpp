#include <bits/stdc++.h>
using namespace std;
void merge_sort(vector <int> b,int a){
    int i=0;
    int j=(a-1)/2;
    int mid = j+1;
    int k=0;
    cout<<j<<endl;
    vector <int> c(a);
    while(i<=j && mid<a){
        if(b[i]<=b[mid]){
            c[k++] = b[i++];
        }
        else{
            c[k++] = b[mid++];
        }
    }
    // cout<<k<<" "<<mid<<" "<<i<<" "<<endl;
    if(mid>=a){
        c[k]= b[i];
    }
    if(i>j){
        c[k] = b[mid];
    }
    
    for(int h=0;h<a;h++){
        cout<<c[h]<<" ";
    }
}
int main()
{
    cout << "Enter the size of the array : " << endl;
    int a;
    cin >> a;
    vector<int> b(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    merge_sort(b, a);
}