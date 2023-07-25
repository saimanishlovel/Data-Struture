#include <iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"The swap of two numbers is :"<<a<<endl<<b;
    return 0;
}