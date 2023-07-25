#include <iostream>
using namespace std;
#include <math.h>
int pow(int m,int n){
    if(n<=0){
        return 1;
    }
    return pow(m,n-1)*m;
}
int ppo(int m,int n){
    int add=1;
   for(int i=1;i<=n;i++){
        add=add*m;
    }
    return add;
}
int main(){
    int a,b;
    cin>>a>>b;
    int f=ppo(a,b);
    int r=pow(a,b);
    cout<<r<<endl<<f;
    return 0;
}