// we are createing and displaying linked list
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first=NULL;
void create(int a[],int n)
{
    
    struct node *t,*last;
    first = new node;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t = new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void improved_search(struct node *b,int rotations,int d){
    struct node *p;
    p=b;
    
    for(int i=0;i<rotations-1;i++){
        p=p->next;
    }
    struct node *t;
    t=new node;
    t->data=d;
    t->next=p->next;
    p->next=t;
}
void display(struct node *p){
    if(p!=NULL){
        cout<< p->data<<" ";
        // p=p->next;
        display(p->next);
    }
}
int main()
{
    // struct node *p;
    int a[] = {1, 2, 3, 4, 5};

    create(a,5);
    improved_search(first,3,6);
    display(first);
    return 0;
}