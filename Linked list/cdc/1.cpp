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
void insert_at_end(struct node *t,int x){
    while (t->next!=NULL)
    {
        t=t->next;
    }
    struct node *last = new node;
    last->data=x;
    last->next=NULL;
    t->next=last;
    
}
void display(struct node *t){
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
}
int main(){
    int x;
    cin>>x;
    int size;
    cin>>size;
    create(size);
    insert_at_end(first,x);
    display(first);
}