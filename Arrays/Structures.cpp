#include <iostream>
using namespace std;
struct  Rectangle
{
    int length;
    int breath;
    char a;  //it takes 4 bytes of memory but it uses 1 byte for char
    /* data */
};
int main(){
    // struct Rectangle r;//Declaration 
    struct Rectangle r={5,6};//Declaration and initilazation
    // r.length=8;//change in the values;
    // r.breath=10;//chageing the values;
    cout<<r.breath<<" "<<r.length<<endl;
    // printf("%d","The Area of Rectangle is: ",(r.length)*(r.breath));
    cout<<r.length*r.breath<<endl;
    cout<<sizeof(Rectangle);   // the each int type takes 4 bytes of memory
}

