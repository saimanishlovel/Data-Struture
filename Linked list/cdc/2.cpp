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
void check(int x,int size){
      struct node *last = first;
      int len = size;
      while(last!=NULL){
        if (x==last->data){
            cout<<x<<": Yes";
            break;
            
        }
        else{
            last=last->next;
            len--;
        }
      }
      if(len==0){
        cout<<x<<": No";
      }
}
void display(struct node *t){
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
}
int main(){
    int size;
    cin>>size;

    create(size);
    int x;
    cin>>x;
    check(x,size);
    // display(first);
}