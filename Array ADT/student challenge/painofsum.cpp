// finding pain of elements of sum k in sorted array
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
    int pair_sum = 10;
    int i = 0;
    int j = a - 1;
    cout<<"The pair of elements are : "<<endl;
    while (i < j)
    {
        if (b[i] + b[j] > pair_sum)
        {
            j--;
        }
        if (b[i] + b[j] < pair_sum)
        {
            i++;
        }
        if (b[i] + b[j] == pair_sum)
        {
            cout << b[i] << " " << b[j] << endl;
            i++;
            j--;
        }
    }

    return 0;
}