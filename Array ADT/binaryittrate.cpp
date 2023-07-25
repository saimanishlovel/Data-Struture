#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int bubbleittarate(int l, int h, int key)
{
    vector<int> b(h);
    for (int i = 0; i < h; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (b[j] > b[j + 1])
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (key == b[mid])
            return mid;

        if (key < b[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }

    return -1;
}
int main()
{
    int a, b, key;
    cin >> a >> b >> key;
    int result = bubbleittarate(a, b - 1, key);
    cout << result;
}