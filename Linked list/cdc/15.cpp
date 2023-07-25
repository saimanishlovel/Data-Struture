#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first  = NULL;

struct node *last=first;
void display(struct node *t)
{
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}
void reverse(struct node *t, int size)
{
    vector<int> b(size);

    for (int i = 0; i < size; i++)
    {
        b[i] = t->data;
        t = t->next;
    }

    t = first;
    for (int i = size - 1; i >= 0; i--)
    {
        t->data = b[i];
        t = t->next;
    }
}
void insert(int x)
{
    struct node *add = new node;
    add->data=x;
    add->next=NULL;
    if(last==NULL){
        last=add;
        first=add;
    }else{
        last->next=add;
        last=add;
    }
}
int main()
{
    int num;
    while (true)
    {
        cin >> num;
        if (num == 0)
        {
            break;
        }
        else
        {
            insert(num);
        }
    }
    int x;
    cin >> x;
    reverse(first, x);
    display(first);
}