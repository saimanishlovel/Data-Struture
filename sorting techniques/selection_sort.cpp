#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array : ";
    int a;
    cin >> a;
    vector<int> b(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    cout << "Element before selection sort" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << b[i] << " ";
    }
    cout<<endl;
    int i = 0;
    while (i < a - 1)
    {
        int key = b[i];
        int store=i;
        for (int j = i+1; j < a; j++)
        {
            if (key > b[j])
            {
                key=b[j];
                store = j;
            }
        }
        int temp = b[i];
        b[i] = b[store];
        b[store] = temp;
        i++;
    //     // for(int k=0;k<a;k++){
    //     // cout<<b[k]<<" ";
    // }
    cout<<endl;
    }
    cout<<"Elements after selection sort : ";
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }
}