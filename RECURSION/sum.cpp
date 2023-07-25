#include <iostream>
using namespace std;
static  int sum=0;
int fun(int n){
   
    if(n>0){
      sum+=n; 
      fun(n-1);
    }
    
    return sum;

// return 0;
}
int main(){
    cout << fun(5);
    return 0;
}
