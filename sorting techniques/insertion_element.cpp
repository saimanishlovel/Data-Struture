#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the no of elements : " << endl;
    int a;
    cin >> a;
    vector<int> b(a + 1);
    cout << "Enter the elements : ";
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    cout << "Enter the inserting element : ";
    int key;
    cin >> key;
    int j = a - 1;
    cout << "Element before insertion : ";
    for (int i = 0; i < a; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    while (j >= 0)
    {
        if (b[j] > key)
        {
            b[j + 1] = b[j];
        }
        else
        {
            b[j + 1] = key;
            break;
        }
        j--;
    }
    cout << "Element after the insertion is : ";
    for (int i = 0; i < a+1; i++)
    {
        cout << b[i] << " ";
    }
}