#include<bits/stdc++.h>
using namespace std;
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct Queue *q){
    cout<<"Enter the size of the array : ";
    cin>>q->size;
    q->front=q->rear=0;
    q->Q=new int[q->size];
}
void enqueue(struct Queue *q,int element){
    if((q->rear+1)%q->size==q->front){
        cout<<"Queue is Full"<<endl;

    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=element;
    }
}
void dequeue(struct Queue *q){
    if(q->front==q->rear){
        cout<<"Queue is Empty"<<endl;
    }
    int x=(q->front+1)%q->size;
    cout<<x<<endl;
}
void display(struct Queue *q){
    int i=q->front+1;
    do{
        cout<<q->Q[i]<<" ";
        i=(i+1)%q->size;
    }while(i!=(q->rear+1)%q->size);
    cout<<endl;
}
int main(){
    struct Queue q;
    create(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(&q);
    dequeue(&q);
    display(&q);

}