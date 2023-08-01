#include <bits/stdc++.h>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int  partitions(vector<int> b, int l, int h)
{
    int pivot = b[l];
    int i = l;
    int j = h;
    do
    {
        do
        {
            i++;
        } while (b[i] <= pivot);
        do
        {
            j--;
        } while (b[j] > pivot);
        if (i < j)
        {
            swap(b[i], b[j]);
        }
    } while (i < j);
    swap(b[l], b[j]);
    return j;
}

void quicksort(vector<int> b, int l, int h)
{
    int j;
    if (l < h)
    {
        j = partitions(b, l, h);
        quicksort(b, l, j);
        quicksort(b, j + 1, h);
    }
}
int main()
{
    cout << "Enter the size of array : ";
    int a;
    cin >> a;
    vector<int> b(a + 1);
    cout << "take last element of an array as int_max value" << endl;
    for (int i = 0; i < a + 1; i++)
    {
        cin >> b[i];
    }
    
    quicksort(b, 0, a);

    for (int i = 0; i < a; i++)
    {
        cout << b[i] << " ";
    }
}