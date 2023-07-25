// we are createing and displaying linked list
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

node *first=NULL;
int node_count = 0;


// void create(int a[],int n)
// {
//     int i;
//     struct node *t,*last;
//     first = new node;
//     first->data=a[0];
//     first->next=NULL;
//     last=first;
//     for(int i=1;i<n;i++){
//         t = new node;
//         t->data=a[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }
// }
void insert(int position ,int element){
    struct node *t = first;

    if(position == 0){
        node* newnode = new node(element);
        newnode->next = first;
        first = newnode;
    }
    else if (position  <= node_count){
        for(int i=0;i<position - 1;i++){
            t=t->next;
        }
        node* newnode = new node(element);
        newnode->next = t->next;
        t->next = newnode;
    } 
    else {
        while (t->next != NULL) {
            t = t->next;
        }

        t->next = new node(element);
    }

    node_count++;
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
    int a[] = {1, 2, 3, 4, 5};
      insert(0,8);
      insert(0,1);
      insert(1,3);
      insert(2,9);
      insert(213, 69);


    display(first);
    return 0;
}