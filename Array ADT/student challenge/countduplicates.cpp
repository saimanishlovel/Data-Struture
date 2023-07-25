//counting duplicates in sorted array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    vector<int> b(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    int i = 0;
    int count = 0;
    
    while (i < a)
    {
        if (b[i] != b[i + 1])
        {
            i++;
        }
        else
        {
            // cout << b[i] << " ";
            count++;
            i++;
        }
    }
    cout<<"The no of duplicate elements are: "<<count;
    return 0;
}