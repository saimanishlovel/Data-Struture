#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct element
{
    int i, j, x;
};
struct sparse
{
    int m;
    int n;
    int num;
    struct element *e;
};
void create(struct sparse *s)
{
    cout << "Enter the dimensions" << endl;
    cin >> &s->m >> &s->n;
    cout << "Enter no of non zero elements" << endl;
    cin >> &s->num;
}
int main()
{
    struct sparse s;
    create(&s);
}