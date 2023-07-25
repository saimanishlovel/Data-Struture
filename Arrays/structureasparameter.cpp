#include<iostream>
#include <stdio.h>
using namespace std;
struct rectangle{
      int length ;
      int breath;
};
int fun(struct rectangle *r1){
    r1->length=3;
    r1->breath=7;
    cout<<"The area of a rectangle is : "<<r1->length*r1->breath<<endl;
};
int main(){
    struct rectangle r={4,5};
    cout<<"The area of rectangel is:"<<r.breath*r.length;
    fun(&r);
      cout<<"The area of rectangel is:"<<r.breath*r.length;
    return 0;
}