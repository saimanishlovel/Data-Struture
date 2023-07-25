#include <bits/stdc++.h>
using namespace std;
struct Stack{
    int top;
    int *s;
    int size;
};
void create(struct Stack *st){
    st->top=-1;
    cout<<"Enter the Size of stack : ";
    cin >> st->size;
    st->s=new int[st->size];
}
void push(struct Stack *st,int element){
    if(st->top==st->size-1){
        cout<<"Stack is full"<<endl;
    }
    else{
        cout<<"the pushed element is : ";
        cout<<element<<endl;
        st->top++;
        st->s[st->top]=element;
    }
}
void pop(struct Stack *st){
    int x;
    if(st->top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        x=st->s[st->top--];
        cout<<"The poped out element is : "<<x<<endl;
    }
}
void display(struct Stack *st){
    cout<<"the elements in the stack are : ";
    for(int i=st->top;i>=0;i--){
        cout<<st->s[i]<<" ";
    }
    cout<<endl;
}
int main(){
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,25);
    push(&st,-34);
    push(&st,9876);
    display(&st);
    pop(&st);
    pop(&st);
    display(&st);
    push(&st,78);
    display(&st);

    
}