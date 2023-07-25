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
void check_sorted(node *p)
{
    node *temp = p;
    node *prev;
    prev = temp;
    temp = temp->next;
    while (temp != NULL)
    {

        if (prev->data <= temp->data)
        {
            prev = temp;
            temp = temp->next;
        }
        else
        {
            cout << "Not sorted";
            break;
        }
    }
    cout << "Sorted";
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
    check_sorted(first);
    // display(first);
    return 0;
}