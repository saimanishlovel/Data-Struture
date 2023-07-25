// we are createing and displaying linked list
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;
void create(int a[], int n)
{

    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void reverse_elements(node *first)
{
    vector<int> b(5);
    node *temp = first;
    int i = 0;
    while (temp != NULL)
    {
        b[i] = temp->data;
        temp = temp->next;
        i++;
    }
    temp = first;
    i--;
    while (temp != NULL)
    {
        temp->data = b[i];
        temp = temp->next;
        i--;
    }
}
void display(struct node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        // p=p->next;
        display(p->next);
    }
}
int main()
{
    // struct node *p;
    int a[] = {1, 2, 3, 4, 5};

    create(a, 5);
    reverse_elements(first);
    display(first);
    return 0;
}