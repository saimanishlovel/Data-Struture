#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void leftshift(vector<int> &b){
    
    int first_element = b[0];
    for (int i = 0, j = 1; i < b.size(); i++, j++)
    {
        b[i] = b[j];
    }
    b[b.size() - 1] = first_element;
  
}
int main()
{
    int a;
    cin >> a;
    vector<int> b(a);
    for (int i = 0; i < a; i++)
    {
        cin>>b[i];
    }

    leftshift(b);
    leftshift(b);

    for (int i = 0; i < a; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}