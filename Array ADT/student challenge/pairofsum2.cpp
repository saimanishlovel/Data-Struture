// finding the pair of sum elements in unsorted array
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
    int i, j, pair = 10;
    for (i = 0; i < a - 1; i++)
    {

        for (j = i + 1; j < a; j++)
        {
            if (b[i] + b[j] == pair)
            {
                cout << b[i] << " " << b[j] << endl;
            }
        }

        // for (int i = 0; i < a; i++)
        // {
        //     cout << b[i];
        // }
    }
        return 0;
    }