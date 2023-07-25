//inserting a node a first position in the linked list
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
    last =head;
    for(int i=1;i<size;i++){
        struct node *t = new node;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
void insert_at_first(struct node *first,int element){
    struct node *last = new node;
    last->data=element;
    last->next=head;
    while(first->next!=head){
        first=first->next;
    }
    first->next=last;
    // head=last; if we change the head first element is new element or new element is last element

}
void display(struct node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}
int main(){
    int a[] ={1,2,3,4,5};
    create(a,5);
    insert_at_first(head,6);
    display(head);
    return 0;
}