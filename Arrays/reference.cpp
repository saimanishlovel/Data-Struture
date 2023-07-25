#include <iostream>
#include <stdio.h>
using namespace std;
 
 int main(){
    int a=10;
    int &r=a;// the r has assigned same address as a .so when we change the value of a the r value change ,if we change r value then a value will change

    cout<<a<<endl<<r<<endl;
    int b=45;
    r=b;
    cout<<a<<endl<<r<<endl;

 }