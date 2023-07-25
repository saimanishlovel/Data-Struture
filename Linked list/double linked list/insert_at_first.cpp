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
void insert_at_first(struct node *t,int element){
    struct node *last;
    last = new node;
    last->data=element;
    last->next=t;
    t->prev=last;
    last->prev=NULL;
    // t=last;
    first=last;
    


}
void display(struct node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }

}
int main(){
    int a[]={1,2,3,4,5};
    create(a,5);
    insert_at_first(first,0);
    display(first);
    return 0;
}