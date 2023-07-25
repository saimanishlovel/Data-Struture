// we are createing and displaying linked list
#include<bits/stdc++.h>
#include <iostream>
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
int maximum(struct node *p){
    int max=INT_MIN;
    while(p!=NULL){
        max=max>p->data?max:p->data;
        p=p->next;
    }
    return max;
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
    int a[] = {1, 8, 3, 4, 5};

    create(a,5);
    int max=maximum(first);
    cout<<"The maximum element in the array is :"<<max<<endl;;
    display(first);
    return 0;
}