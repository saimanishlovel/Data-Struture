#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head;
void create(int a[], int size)
{
    head = new node;
    head->data = a[0];
    head->next = head;
    struct node *last = head;
    for (int i = 1; i < size; i++)
    {
        struct node *t = new node;
        t->data = a[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
void insert_at_middle(struct node *t , int position, int element){
    struct node *middle = new node;
    middle->data=element;
    middle->next=NULL;
    for(int i=0;i<position-1;i++){
        t=t->next;
    } 
    middle->next=t->next;
    t->next=middle;
}
void display(struct node *t){
    do{
        cout<<t->data<<" ";
       t= t->next;
    }while (t!=head);
    
}
int main(){
    int a[]={1,2,3,5,6};
    create(a,5);
    insert_at_middle(head,3,4);
    display(head);
    return 0;
}