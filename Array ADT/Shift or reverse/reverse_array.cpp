#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout << "Enter the size of array:" << endl;
    cin >> a;
    vector<int> b(a);
    vector<int> c(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    int j = 0;
    for (int i = a - 1; i >= 0; i--)
    {
        c[j] = b[i];
        j++;
    }
    for (int i = 0; i < a; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < a; i++)
    {
        b[i] = c[i];
    }
    for (int i = 0; i < a; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}