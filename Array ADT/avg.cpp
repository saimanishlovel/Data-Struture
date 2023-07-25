#include <iostream>
#include <bits/stdc++.h>
using namespace std;
float Avgs(int a)
{
    vector<int> b(a);
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    float sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum = sum + b[i];
    }
    cout<<setprecision(2);
    cout<<fixed;
    float avg = sum * 1.0 / a  ;

    return avg;
}
int main()
{
    float a, Avg;
    cout << "Enteer size of  an array:" << endl;

    cin >> a;
    Avg = Avgs(a);
    cout << "The Average of the elements is an array is : " << Avg << endl;
    return 0;
}
