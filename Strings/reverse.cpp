// // to find reverse of a string?





// #include <iostream>
// using namespace std;
// int main()
// {
//     string a;
//     getline(cin, a);
//     cout << "The original string is :" << a << endl;
//     for (int i = 0; i < a.size(); i++)
//     {
//         for (int j = a.size()-1 ; j >= 0; j--)
//         {
//             if (i < j)
//             {
//                 int temp = a[j];
//                 a[j] = a[i];
//                 a[i] = temp;
//             }
//         }
//     }
//     cout << "The reverse string is " << a << endl;
// }

#include <iostream>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    cout << "The original string is :" << a << endl;
    int i=0,j=a.size()-1;
    // for (int i = 0; i < a.size(); i++)
    {
        // for (int j = a.size()-1 ; j >= 0; j--)
        {
            while (i < j)
            {
                char temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                i++;j--;
            }
        }
    }
    cout << "The reverse string is " << a << endl;
    // cout<<a.size();
}
