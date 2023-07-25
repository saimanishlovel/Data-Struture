#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;
}*first=NULL;
void create(int size){
    vector <int> b(size);
    for(int i=0;i<size;i++){
        cin>>b[i];
    }
    first = new node;
    first->data=b[0];
    first->next=NULL;
    struct node *last;
    last=first;
    for(int i=1;i<size;i++){
        struct node *t=new node;
        t->data=b[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *t){
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
}
void middle_number(struct node *t,int size){
    if(size%2==0){
         for(int i=1;i<size/2;i++){
           t=t->next;
         }
         cout<<t->data<<" ";
         cout<<t->next->data;
    }
    else{
          for(int i =1;i<size/2 ;i++){
            t=t->next;
          }
          cout<<t->next->data;
    }
}
int main(){
    int size;
    cin>>size;

    create(size);
    middle_number(first,size);
    
    
}