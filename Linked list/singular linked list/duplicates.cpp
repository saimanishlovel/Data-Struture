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
void deletes(node *p){
    node *temp = p->next;
    node *prev =p;
    while(temp->next!=NULL){
       if(prev->data!=temp->data){
        prev=temp;
        temp=temp->next;

       }
       else{
        prev->next=temp->next;
        delete temp;
        temp=prev->next;
       }
    }
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
    int a[] = {1, 2, 3,3, 4, 5};

    create(a,6);
    deletes(first);
    display(first);
    return 0;
}