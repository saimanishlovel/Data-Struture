#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout << "Enter your size of an array:";
    cin >> a;
    vector<int> b(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    for (int i = a - 1, j = 0; i >= j; i--, j++)
    {
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
    }
    for (int i = 0; i < a; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}