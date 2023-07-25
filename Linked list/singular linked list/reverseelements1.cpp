#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
    node(int data){
        data=data;
        next = NULL;
    }
};
struct node *first =NULL;

void create(vector <int> b,int size){

   node first(b[0]);
    struct node* last=&first;
    for(int i=1;i<size;i++){
        struct node* temp = new  node (b[i]);
        last->next =temp ;
        last =last ->next;

    }

}
void display(struct node *p){
      while(p!=NULL){
        cout<<p->data;
        p=p->next;
      }
}
int main(){
    int a;
    cin>>a;
    vector <int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    create(b,a);
    display(first);
    
}