#include <iostream>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

int main(){
     struct rectangle r={10,5};
     struct rectangle *p=&r;
     (*p).length=20;
     (*p).breadth=10;
     cout<<"The Area of Rectangle is :"<<(*p).length * (*p).breadth<<endl;

     p->length=25;
     p->breadth=5;
     cout<<"The Area of Rectangle is :"<<p->length*p->breadth<<endl;
    return 0;
}