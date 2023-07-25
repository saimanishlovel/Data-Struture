#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}
int main()
{
    int a;
    cin >> a;
    vector<int> b(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = a - 1;
    while (i < j)
    {
        while (b[i] < 0)
        {
            i++;
        }
        while (b[j] > 0)
        {
            j--;
        }
        if (i < j)
        {
            swap(b[i], b[j]);
            i++;
            j--;
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}