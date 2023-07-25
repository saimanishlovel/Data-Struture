#include <iostream>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    cout << a.length() << " " << a.size();
    int count_vowels = 0, count_consonents = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'E')
        {
            count_vowels++;
        }
        else if (a[i] != ' ')
        {
            count_consonents++;
        }
    }
    cout << "The no of the vowels are:" << count_vowels << endl;
    cout << "The no of the consonents are : " << count_consonents;

    return 0;
}