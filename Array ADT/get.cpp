#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int a;
    cin >> a;
    vector<int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int index;
    cin >> index;
    cout<<"Enter your index value:";
    if (index > 0 && index < a)
    {
        cout << b[index];
    }
    else
        cout << "Element not found";
    return 0;
}