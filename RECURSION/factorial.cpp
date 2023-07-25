#include <iostream>
using namespace std;
static int b=1;
int fac1(int n){
   if (n <= 0)
    return 1;

    return fac1(n - 1) * n;
}

int fac2(int n){
    int mal=1;
    for(int i=1;i<=n;i++){
            mal=mal*i;
    }
    return mal;
}

int main(){
    int a;
    cin>>a;
    int r=fac1(a);
    cout<<"the factorial of "<<a<<"is "<<fac1(a);
    return 0;
}