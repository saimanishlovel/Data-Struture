// #include <iostrem>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    cout << "Enter the size of the array : " << endl;
    int a;
    cin >> a;
    vector<int> b(a);
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    cout << "Elements before bubble sort : ";
    for (int i = 0; i < a; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "Element after bubble sort : ";
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (b[i] > b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }
}
