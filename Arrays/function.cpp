#include <iostream>
#include <stdio.h>
using namespace std;
int add(int x,int y){
    int  c;
    c=x+y;
    return c;
}
int main(){
    int a,b;
    cin>>a>>b;
    int d;
    d=add(a,b);
    cout<<"The addition of two numbers is: "<<d;
}