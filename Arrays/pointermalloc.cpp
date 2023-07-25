#include <iostream>
#include <stdlib.h>
using namespace std;
struct rectangle 
{
    int length;
    int breadth;
    /* data */
};
int main(){
    // struct rectangle r={10,5};
    struct rectangle *p ;
    p=new rectangle;
    p->length=10;
    p->breadth=5;
    

    cout<<"The area of rectangle is :"<<p->breadth*p->length<<endl;
    p->length=5;
    p->breadth=8;
    cout<<"The area of rectangle is :"<<p->breadth*p->length<<endl;
}
