#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
struct node
{
    char data;
    struct node *next;

} *top = NULL;
int pos = -1;
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
char pop()
{
    struct node *t;
    char x;

    if (top == NULL)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        pos--;
        delete t;
    }
}
void display()
{
    struct node *p;
    p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int precedence(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    return 0;
}
int isOperand(char x){
    if(x=='+' || x=='-' ||  x=='*' || x=='/'){
        return 0;
    }
    else{
        return 1;
    }
}
char * InToPost(char *infix){
    char *postfix=char a[strlen(infix)+1];
    int len = strlen(infix);
    int i=0j=0;
    while(len<0){
        if(isOperand(infix[i])){
            postfix[j++]=infix[i++]
        }
        else{
            if(precedence(infix[i]>precedence(top->data))){
                push(infix[i]);
            }
            else{
                postfix[j++]=pop();
            }
        }
    }
}
int main()
{
    char *infix = "a+b*c";
    char *postfix;

    isBalanced(exp);
}
