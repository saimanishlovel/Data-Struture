#include <iostream>
using namespace std;
int main()
{
    char temp[9];
    cin >> temp;
    cout << "Before the change of case : " << endl;
    for (int i = 0; temp[i] != '\0'; i++)
    {
        if (temp[i] >= 65 && temp[i] <= 90)
        {
            temp[i] = temp[i] + 32;
        }
        else if (temp[i] >= 97 && temp[i] <= 122)
        {
            temp[i] = temp[i] - 32;
        }
    }
    cout << "After the change of case : " << endl;
    for (int i = 0; temp[i] != 0; i++)
    {
        cout << temp[i] << " ";
    }
}