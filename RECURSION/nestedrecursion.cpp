#include <iostream>
using namespace std;
int fun(int n){
    if(n>100){
        cout<<n-10<<endl;
        return (n-10);


    }
    else {
       return fun(fun(n+11));
    }
}
int main(){
        fun(95);
        return 0;
}