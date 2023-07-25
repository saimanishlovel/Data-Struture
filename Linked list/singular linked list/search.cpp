// we are createing and displaying linked list
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first=NULL;
void create(int a[],int n)
{
    int i;
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
int searchs(struct node *p,int a){
       while(p!=NULL){
        if(p->data==a){
            return 1;
        }
        p=p->next;
       }
       return 0;
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

    create(a,5);
    int key ;
    cin>>key;
    bool element=searchs(first,key);
    cout<<element<<endl;

    display(first);
    return 0;
}