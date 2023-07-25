// Row Major Mapping
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout << "Enter the dimensional size:";
    cin >> a;
    vector<int> b(a * (a + 1) / 2);
    for (int i = 0; i < a * (a + 1) / 2; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i >= j)
            {
                cout << b[i * (i - 1) / 2 + j - 1] << " ";
                // cout<<i<<" "<<j<<" ";
                // cout<<endl;
            }
            else if (i < j)
            {
                cout << "0"
                     << " ";
            }
        }
        cout << endl;
    }
}