#include <iostream>
using namespace std;
int main()
{
    char temp[50];
    cin >> temp;
    gets(temp);

    int count = 0;
    for (int i = 0; temp[i] != '\0'; i++)
    {
        if (temp[i] == ' ' && temp[i - 1] != ' ')
        {

            count++;
        }
    }
    // cout << i << endl;

cout << "The no words in the sentence is : " << count + 1;
}