#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int i = 0, j = a.size() - 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            cout << "not palindrome";
            break;
        }

        i++;
        j--;
    }
    if (i = a.size() / 2)
    {
        cout << "palindrome";
    }
    return 0;
}