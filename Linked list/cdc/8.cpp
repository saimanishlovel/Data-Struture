#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first = NULL;
void reverse(struct node *t)
{
    struct node *p = t, *q = NULL, *r = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
void display(struct node *t)
{
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}
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
void find(struct node *t, int x, int size)
{
    int len = 0;
    while (t != NULL)
    {
        if (x == t->data)
        {
            len++;
        }
        t = t->next;
    }
    t = first;
    if (len = 0)
    {
        reverse(t);
        while (t != NULL)
        {
            cout << t->data << " ";
            t = t->next;
        }
    }
    else
    {
        int len = 0;
        while (t != NULL)
        {
            if (x != t->data)
            {
                len++;
                t = t->next;
            }
            else
            {
                break;
            }
        }
        if (len == 0)
        {
            struct node *p = first;
            first = first->next;
            delete p;
            reverse(first);
            display(first);
        }
        else if (len > 0 && len < size)
        {    struct node *p=first,*q=first;
            for (int  i = 0; i < len; i++)
            {
                q=p;
                p=p->next;
            }
            q->next=p->next;
            delete p;
            reverse(first);
            display(first);
            
        }
        else if(len==size){
            struct node *p=first,*q=NULL;
            while(p->next!=NULL){
                q=p;
                p=p->next;
            }
            q->next=NULL;
            delete p;
            reverse(first);
            display(first);

        }
    }
}




int main()
{
    int size;
    cin >> size;
    create(size);
    
    int x;
    cin>>x;
    find(first,x,size);

}