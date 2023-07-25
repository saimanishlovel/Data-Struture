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
    int i;
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
int add(struct node *p)
{
    int sum = 0;
    while ((p != 0))
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
int count(struct node *p){
    int count = 0;
    while (p != NULL){
        count++;
        p = p->next;
    }
    return count;
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
    int result = add(first);
    cout<<"The sum of elements is :"<<result<<endl;
    int counts = count(first);
    cout<<"The no of nodes in the linked list is:"<<counts<<endl;
    display(first);
    return 0;
}