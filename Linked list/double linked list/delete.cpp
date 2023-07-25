#include <bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;

} *first = NULL;
void create(int a[], int size)
{
    first = new node;
    first->data = a[0];
    first->next = first->prev = NULL;
    struct node *last = first;
    for (int i = 1; i < size; i++)
    {
        struct node *t = new node;

        t->data = a[i];
        t->next = last->next;
        last->next = t;
        t->prev = last;
        last = t;
    }
}
void delete_at_first(struct node *t)
{
    struct node *p = t;
    t = t->next;
    first = t;
    delete p;
}
void delete_at_middle(struct node *t, int position)
{
    struct node *q = NULL, *p = t, *r = t->next;
    for (int i = 0; i < position - 1; i++)
    {
        q = p;
        p = r;
        r = r->next;
    }
    q->next=p->next;
    r->prev=p->prev;
    delete p;
}
void display(struct node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    create(a, 5);
    // delete_at_first(first);
    delete_at_middle(first,3);
    display(first);
    return 0;
}