#include <bits/stdc++.h>
using namespace std;
struct Queue{
    int size;
    int front;
    int last;
    int *Array;
};
void create(struct Queue *q){
    cout<<"Enter the size of the array : ";
    cin>>q->size;
    q->Array=new int[q->size];
    q->front=q->last=-1;
}
void enqueue(struct Queue *q,int a){
    //we have to check queue is full or not ,if full cout it is full else enqueue the value
    if(q->last==q->size-1){
        cout<<"the queue is full";
    } 
    else{
        q->last++;
        q->Array[q->last]=a;
    }
    
}
void dequeue(struct Queue *q){
    //we have to check wheather queue is empty or not
    if(q->front==q->last){
        cout<<"queue is empty";
    }
    else{
        q->front++;
        cout<<q->Array[q->front];
    }
    cout<<endl;
}
void display(struct Queue *q){
    for(int i=q->front+1;i<=q->last;i++){
        cout<<q->Array[i]<<" ";
    }
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