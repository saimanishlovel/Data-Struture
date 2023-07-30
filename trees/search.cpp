#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct node {
    struct node *leftchild;
    int data;
    struct node *rightchild;
};
struct node *root=NULL;
struct Queue{
    int size;
    int front;
    int rare;
    node **Q;
};

int isEmpty(struct Queue q){
    return q.front==q.rare;
}
void create(Queue *q,int size){
    q->size=size;
    q->front=q->rare=0;
    q->Q=(node **)malloc(q->size*sizeof(node *));
}
void enqueue(Queue *q,node *x){
    if((q->rare+1)%q->size == q->front){
        printf("Queue is full\n");  
    }
    else{   
        q->rare=(q->rare+1)%q->size;
        q->Q[q->rare]=x;
}
}
node * dequeue(struct Queue *q){
    node *x=NULL;
    if(q->front==q->rare){
        cout<<"Queue is empty"<<endl;
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
     
}
void treecreate(){
    node *p,*temp;
    Queue q;
    create(&q,100);
    int x;
    cout<<"Enter the root value: ";
    cin>>x;
     root=new node;
    root->data=x;
    root->leftchild=root->rightchild=NULL;
    enqueue(&q,root);
    while(!isEmpty(q)){
        p=dequeue(&q);
        int a;
        cout<<"Enter left child : "<<p->data<<" ";
        cin>>a;
        if(a!=-1){
            temp = new node;
            temp -> data = a ;
            temp -> leftchild = temp->rightchild=NULL ;
            p->leftchild=temp;
            enqueue(&q,temp);
        }
        // int a;
        cout<<"Enter right child : "<<p->data<<" ";
        cin>>a;
        if(a!=-1){
            temp = new node;
            temp -> data = a ;
            temp -> leftchild = temp->rightchild=NULL ;
            p->rightchild=temp;
            enqueue(&q,temp);
        }
    }

}
void search(node *p,int key){
  if(p==NULL){
    cout<<"Element is not found";
    return;
  }
  if(p->data==key){
    cout<<"Element is found";
  }
  else if(key<p->data){
    search(p->leftchild,key);
  }
  else{
    search(p->rightchild,key);
  }
}


int main(){
    
   treecreate();
   int key;
   cin>>key;
   search(root,key);

}