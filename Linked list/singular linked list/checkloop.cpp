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
    int i;
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
void display(struct node *p){
    if(p!=NULL){
        cout<< p->data<<" ";
        // p=p->next;
        display(p->next);
    }
}
int isLoop(struct node *f){
    struct node *p,*q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;

    } while (p && q && p!=q);
    
    if(p==q){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main()
{
    // struct node *p;
    int a[] = {1, 2, 3, 4, 5};
 
    create(a,5);
    struct node *c , *b;
    c=first->next->next;
    b=first->next->next->next;
    b->next=c;

    // display(first);
    if(isLoop(first)==1){
    cout<<"There is a loop in linked list "<<endl;
    }
    else{
        cout<<"there is no loop in the linked list"<<endl;
    }
    return 0;
}