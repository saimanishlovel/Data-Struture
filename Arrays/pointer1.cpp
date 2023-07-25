#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a; // asscessing the address value of a
    cout<<"The Address value of A is:"<<p<<endl;
    cout<<"The value of a is :"<<*p<<endl;
    cout<<"the size of pointer is:"<<sizeof(p)<<endl; //the size of address value is 8
    cout<<"the size of pointer is"<<sizeof(*p)<<endl;
}