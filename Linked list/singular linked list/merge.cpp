//in this we are merging two sorted linked lists into a single sorted linked list;
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
void merge(struct node *p,struct node *q){
    struct node *last;
    if(p->data<q->data){
        third =p , last = p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=q , last = q;
        q=q->next;
        last->next=NULL;
    }
    while(p!=NULL && q!=NULL){
        if(p->data<q->data){
              last->next=p;
              last=p;
              p=p->next;
              last->next=NULL;

        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
        
    }
    if(p!=NULL){
        last->next=p;
    }
    else{
        last->next=q;
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
    int a[] = {1,6,9,14,15};
    int b[] = {2,4,10,11,20};
    create(a,5);
    create2(b,5);
    // concatination(first,second);
    merge(first,second);
    display(third);
    // display(second);
    return 0;
}