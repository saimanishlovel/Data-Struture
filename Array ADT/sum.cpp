#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sums(int a)
{
    vector<int> b(a);
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum = sum + b[i];
    }
    return sum;
}
int main()
{
    int a, sum;
    cout << "Enteer size of  an array:" << endl;

    cin >> a;
    sum = sums(a);
    cout << "The sum of the elements is an array is : " << sum << endl;
    return 0;
}