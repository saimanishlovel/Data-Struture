#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first=NULL;
void create(int a[], int size){
    first = new node;
    first->data=a[0];
    first->next=NULL;
    struct node *last;
    last = first;
    for(int i=1;i<size;i++){
        struct node *t = new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p){
       while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
       }
       cout<<endl;
}
void reverseelements(struct node *p){
    struct node  *q=NULL,*r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
int main(){
    int a[] ={1,2,3,4,5};
    create(a,5);
    display(first);
    reverseelements(first);
    display(first);
    return 0;
}