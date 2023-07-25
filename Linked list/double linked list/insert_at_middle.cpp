#include <bits/stdc++.h>
using namespace std;
struct node {
    struct node *prev;
    int data;
    struct node *next;

}*first=NULL;
void create(int a[],int size){
    first = new node;
    first->data=a[0];
    first->next=first->prev=NULL;
    struct node *last = first;
    for(int i=1;i<size;i++){
        struct node *t = new node;

        t->data=a[i];
        t->next=last->next;
        last->next=t;
        t->prev=last;
        last=t;
    }
}
void length(struct node *t){
    int len =0;
    while(t){
        len++;
        t=t->next;
    }
    cout<<len<<" "<<endl;
}
void display(struct node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }

}
void insert_at_middle(struct node *t,int position , int element){
    struct node *last;
    last = new node ;
    last->data=element;
    struct node *p=t,*q=NULL;
    for(int i=0;i<position-1;i++){
        q=p;
        p=p->next;

    }
    last->next=q->next;
    last->prev=q;
    p->prev=last;
    q->next=last;
    }
int main(){
    int a[]={1,2,3,5,6};
    create(a,5);
    insert_at_middle(first,4,4);
    display(first);
    return 0;
}