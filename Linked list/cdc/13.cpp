#include <iostream>
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
        struct node *o = new node;
        o->data = b[i];
        o->next = NULL;
        last->next = o;
        last = o;
    }
}
void display(struct node *t)
{
    node *temp = t;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void joint(struct node *t, int x)
{
    struct node *first1 = new node, *p;
    struct node *second = new node, *q;
    if (t->data < x)
    {
        first1->data = t->data;
        first1->next = NULL;
        t = t->next;
        p = first1;
        while (t != NULL)
        {
            if (t->data < x)
            {
                struct node *store = new node;
                store->data = t->data;
                store->next = NULL;
                p->next = store;
                p = store;
            }
            t = t->next;
        }
    }
    display(first1); // complete

    t = first;
    int len = 0;
    while (t != NULL)
    {
        if (t->data > x)
        {
            second->data = t->data;
            second->next = NULL;
            break;
        }
        t = t->next;
        len++;
    }
    q = second;
    t = first;
    for (int i = 0; i < len; i++)
    {
        t = t->next;
    }
    t = t->next;
    while (t != NULL)
    {
        if (t->data > x)
        {
            struct node *store2 = new node;
            store2->data = t->data;
            store2->next = NULL;
            q->next = store2;
            q = store2;
        }
        t = t->next;
    }
    display(second); // complete

    t = first;
    struct node *third = new node;
    int third1 = 0;
    while (t != NULL)
    {
        if (t->data == x)
        {
            third->data = x;
            third->next = NULL;
            third1++;
        }
        t = t->next;
    }
    if (third1 == 1)
    {
        struct node *check = first1;
        while (first1->next != NULL)
        {
            first1 = first1->next;
        }
        first1->next = third;
        first1 = third;
        first1->next = second;

        display(check);
    }
    if (third1 == 0)
    {
        struct node *check = first1;

        while (first1->next != NULL)
        {
            first1 = first1->next;
        }
        first1->next = second;
        display(check);
    }
}

int main()
{
    int size;
    cin >> size;
    create(size);
    int x;
    cin >> x;
    joint(first, x);
    // display(first);
}