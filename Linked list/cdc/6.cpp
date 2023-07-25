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
void reverse(struct node *t){
    struct node *p=t,*q=NULL,*r=NULL;
    while(p){
        r=q;
        q=p;p=p->next;
        q->next=r;
    }
    first = q;
}
void divide(struct node *t,int size){
    for(int i=0;i<size/2;i++){
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
    for(int i=size/2;i<size;i++){
        cout<<t->data<<" ";
        t=t->next;
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
    reverse(first);
    divide(first,size);
}