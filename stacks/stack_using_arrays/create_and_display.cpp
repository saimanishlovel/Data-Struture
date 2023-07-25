#include <bits/stdc++.h>
using namespace std;
struct Stack{
    int top;
    int size;
    int *s;
};
void create(struct Stack *st){
    st->top=-1;
    cout<<"Enter the size of the stack : "<<endl;
    cin >> st->size ;
    st->s = new int[st->size];
    
}
void display(struct Stack *st){
    
    for(int i=st->top;i>=0;i--){
        cout<<st->s[i]<<" ";
    }
    cout<<endl;
}
void push(struct Stack *st,int element){
    if(st->top==st->size){
        cout<<"the Stack overflow "<<endl;
    }
    else{
        st->top++;
        
        st->s[st->top]=element;
    }
}
void pop(struct Stack *st){

    if(st->top==-1){
        cout<< "the stack is underflow ";

    }
    else{
        cout<<"the poped element is : ";
        cout<< st->s[st->top--]<<endl;
    }
}
int main(){
    struct Stack st;
    create(&st);
    push(&st,10);
push(&st,25);
push(&st,34);
pop(&st);
display(&st);
}