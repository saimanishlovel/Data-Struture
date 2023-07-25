#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first = NULL;
void create(int size)
{
    vector<int> b(size);
    for (int i = 0; i < size; i++)
    {
        cin >> b[i];
    }
    first = new node;
    first->data = b[0];
    first->next = NULL;
    struct node *last = first;
    for (int i = 1; i < size; i++)
    {
        struct node *t = new node;
        t->data = b[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void reverse_at_middle(int m, int n)
{
    vector<int> b(n - m + 1);
    struct node *t = first;
    int index = 0;
    for (int i = 1; i < m; i++)
    {
        t = t->next;
    }
    for (int i = m; i <= n; i++)
    {
        b[index++] = t->data;
        t = t->next;
    }

    t = first;
    index--;
    for (int i = 1; i < m; i++)
    {

        t = t->next;
    }

    for (int i = m; i <= n; i++)
    {

        t->data = b[index--];

        t = t->next;
    }
}

void display(struct node *t)
{
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}
int main()
{
    int size;
    cin >> size;
    create(size);
    int m, n;
    cin >> m >> n;
    reverse_at_middle(m, n);
    display(first);
}