#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *top = NULL;
void push(int x)
{
    struct node *t;
    t = new node;
    if (t == NULL)
    {
        cout << "Stack is full";
        cout << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop(){
    struct node *t;
    int x=1;
    if(top==NULL){
        cout<<"stack is empty"<<endl;
    }
    else{
        t=top;
        top=top->next;
        x=t->data;
        delete t;
    }
    return x;

}
void display(){
    struct node *p;
    p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
   push(10);
   push(20);
   display();
}
