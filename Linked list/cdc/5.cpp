#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first = NULL;
void create(int size){
    vector <int> b(size);
    for(int i=0;i<size;i++){
        cin>>b[i];
    }
    first = new node;
    first->data=b[0];
    first->next=NULL;
    struct node *last=first;
    for(int i=1;i<size;i++){
        struct node *t = new node;
        t->data = b[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void insert_at_end(struct node *t){
    struct node *p=first,*q=first;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    int temp = p->data;
    p->data=q->data;
    q->data=temp;
    
}
void display(struct node *t){
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main(){
    
    int size;
    cin>>size;
    create(size);
    cout<<"Before Swap : ";
    display(first);
    insert_at_end(first);
    cout<<"After swap: ";
    display(first);
    return 0;
}