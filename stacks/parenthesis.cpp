#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
struct node
{
    char data;
    struct node *next;
    
} *top = NULL;
int pos =-1;
void push(char x)
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
char pop(){
    struct node *t;
    char x;
    
    if(top==NULL){
        cout<<"stack is empty"<<endl;
    }
    else{
        t=top;
        top=top->next;
        x=t->data;
        pos--;
        delete t;
    }
    

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

void isBalanced(char *exp){
    for(int i=0;i<strlen(exp);i++){
        if(exp[i]=='('){
            push(exp[i]);
        }
        else if (exp[i]==')')
        {
            if(top==NULL){
                printf("not balanced");
            }
            else{
                pop();
            }

        }
        
    }
    if(top==NULL){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
}
int main(){
   char *exp="(a+b";
   
   isBalanced(exp);
}
