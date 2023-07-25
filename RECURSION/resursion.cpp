#include <iostream>
using namespace std;
void fun(int x){
     if(x>0){
        cout<<x<<" ";
        fun(x-1);      //for this output is 1 2 3

    /*   fun(x-1);
         cout<<x<<" ";*/ //for this the out put is 1 2 3
    }
}
int main(){
    int a;
    cin>>a;
    fun(a);
    return 0;
}