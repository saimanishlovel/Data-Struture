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
void delete_element(struct node *b, int position)
{
    // node *p = b->next;
    // node *q ,*t= b;
    // while(p!=NULL){
    // if (position == 0)
    // {
    //     q = t->next;
    //     delete t;
    //     t = q->next;
    // }
    // else
    // {

    //     for (int i = 0; i < position - 1; i++)
    //     {
    //         q = p;
    //         p = p->next;
    //     }
    //     q->next = p->next;
    //     delete p;
    //     p = q->next;
    // }
    if (position == 1)
    {
        first = b->next;
    }
    if (position > 1)
    {
        node *p = b;
        node *q = NULL;
        for (int i = 0; i < position - 1; i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q->next = p->next;
            delete p;
        }
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
    delete_element(first, 1);
    display(first);
    return 0;
}