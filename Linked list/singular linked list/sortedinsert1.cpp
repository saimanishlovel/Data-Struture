// we are createing and displaying linked list
//inserting the element in sorted array 

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int element){
        data=element;
        next=NULL;
    }
} 


*first=NULL;
void create(int a[],int n)
{
 
    struct node *t,*last;
    first = new node(a[0]);
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t = new node(a[i]);
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void sorted_insert(int element){
    node *t = new node(element);
    node *last,*p =first;
    if(first==NULL){
        p=t;
    }
    if(p->data>element){
        t->next=p;
        first=t;
    }
    while(p->data < element){
        last=p;
        p=p->next;

    }
    t->next=last->next;
    last->next=t;

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
    int a[] = {1, 2, 3, 5, 9};

    create(a,5);
    sorted_insert(4);
    sorted_insert(7);
    sorted_insert(6);

    display(first);
    return 0;
}