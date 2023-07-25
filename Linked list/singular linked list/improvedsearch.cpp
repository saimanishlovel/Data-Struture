#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first=NULL;
void create(int a[],int b){
    struct node *last;
    first->data=a[0];
    first->next=NULL;
    last=first;
 
    for(int i=1;i<b;i++){
    node *p =new node;
    p->data=a[i];
    p->next=NULL;
    last->next=p;
    last=p;
    }


}
void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
        }
}
void improved_search(struct node *p){
    cout<<"which position you want to insert the nord:"<<endl;
    int rotations;
    for(int i=0;i<rotations-1;i++){
        p=p->next;
    }
    struct node *t;
    int a;
    cout<<"enter the element "<<endl;
    cin>>a;
    t->data=a;
    t->next=p->next;
    p->next=t;
}
int main(){
  int a[]={1,2,3,4,5,6};
  create(a,6)  ;
//   improved_search(first);
  display(first);
}