#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int a[], int size)
{

    first = new node;
    first->data = a[0];
    first->next = NULL;
    struct node *last = first;
    for (int i = 1; i < size; i++)
    {
        struct node *t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void insert_at_middle(struct node *t, int x)
{
    struct node *p=t,*q=NULL;
    struct node *last = new node;
    last->data=x;
    last->next=NULL;
    for(int i=0;i<2;i++){
        q=p;
        p=p->next;
    }
    q->next=last;
    last->next=p;
}
void display(struct node *t)
{
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout<<endl;
}
int main()
{
int x;
    cin >> x;
    int a[] = {6, 7, 8, 9} ;
    create(a, 4);
    
    display(first);
    insert_at_middle(first, x);
    display(first);
}