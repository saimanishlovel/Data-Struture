#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;
void create(int a[],int n){
    first =new node;
    first->data=a[0];
    first->next=NULL;
    struct node *last;
    last=first;
    for(int i=1;i<n;i++){
        struct node *t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void create2(int a[],int n){
    second =new node;
    second->data=a[0];
    second->next=NULL;
    struct node *last;
    last=second;
    for(int i=1;i<n;i++){
        struct node *t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void concatination(struct node *p,struct node *q){
    third =p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}
void display(struct node *p){
    
        while(p!=NULL){
            cout<<p->data<<" ";

            p=p->next;
        }
}
int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,0};
    create(a,5);
    create2(b,5);
    concatination(first,second);
    display(third);
    // display(second);
    return 0;
}