// find duplicates in unsorted array
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
    int count = 0;
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (b[i] == b[j])
            {
                count++;
            }
        }
        if(count > 0){
        cout << "The duplicate element is :" << b[i] << " " << count << endl;
        }
        count = 0;
    }

    return 0;
}