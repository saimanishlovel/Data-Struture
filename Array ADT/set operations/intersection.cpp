#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> a(m);
    vector<int> c;
    vector<int> b(n);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int l = 0;
    // int k = m;
    while (l < n)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[l] == a[j])
            {
                // c[k] = b[l];
                // k++;
                c.push_back(b[l]);
                
            }
            l++;
        }
    }
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}