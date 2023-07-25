// merging of two arrays
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> a(m);
    vector<int> b(n);
    vector<int> c(m + n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        if (b[j] <= a[i])
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    for (; i < m; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (; j < n; j++)
    {
        c[k] = b[j];
        k++;
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}