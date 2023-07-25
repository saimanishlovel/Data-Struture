//we are creating a circular linked list
#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*head;
void create(int a[],int size){
    head = new node;
    head->data=a[0];
    head->next=head;
    struct node *last;
    last = head;
    for(int i=1;i<size;i++){
        struct node *t = new node;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
void display(struct node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }
    while(p!=head);
    cout<<endl;
}
void Recursive_display(struct node *p){
    static int flag = 0;
    if(p!=head || flag==0){
        flag=1;
        cout<<p->data<<" ";
        Recursive_display(p->next);
    }
    flag=0;
}
int main(){
    int a[]={1,2,3,4,5};
    int size = 5;
    create(a,size);
    display(head);
    Recursive_display(head);
    return 0;
}