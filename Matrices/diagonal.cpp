#include <bits/stdc++.h>
using namespace std;
int sets(vector <int> &b,int a){
       for(int i=0;i<a;i++ ){
        cin>>b[i];
    }
}
void gets(vector <int> &b,int a){
    
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==j){
                cout<<b[i]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
           
        }
         cout<<endl;
    }
}
int main(){
    int a;
    cin>>a;
    vector <int> b(a);
    sets(b,a);
    gets(b,a);
}


    // for(int i=0;i<a;i++ ){
    //     cin>>b[i];
    // }
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<a;j++){
    //         if(i==j){
    //             cout<<b[i]<<" ";
    //         }
    //         else{
    //             cout<<"0"<<" ";
    //         }
           
    //     }
    //      cout<<endl;
    // }
//     return 0;

// }