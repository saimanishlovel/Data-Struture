// we are createing and displaying linked list
#include <bits/stdc++.h>
using namespace std;

// struct node
// {
//     int data;
//     struct node *next;

//     node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// node *first=NULL;
// int node_count = 0;

// void create(int a[],int n)
// {

//     struct node *t,*last;
//     // first = new node;
//     first->data=a[0];
//     first->next=NULL;
//     last=first;
//     for(int i=1;i<n;i++){
//         t = new node(a[i]);
//        last->next=t;
//         last=t;
//     }
// }
// void insert(int position ,int element){
//     struct node *t = first;

//     if(position == 0){
//         node* newnode = new node(element);
//         newnode->next = first;
//         first = newnode;
//     }
//     else if (position  <= node_count){
//         for(int i=0;i<position - 1;i++){
//             t=t->next;
//         }
//         node* newnode = new node(element);
//         newnode->next = t->next;
//         t->next = newnode;
//     }
//     else {
//         while (t->next != NULL) {
//             t = t->next;
//         }

//         t->next = new node(element);
//     }

//     node_count++;
// }
// void Insert_last(int element){

//     node *t= new node( element);
//     node *p =first;
//     while(p!=NULL){
//         p=p->next;
//     }
//     p->next= t;

// }
// void display(struct node *p){
//     if(p!=NULL){
//         cout<< p->data<<" ";
//         // p=p->next;
//         display(p->next);
//     }
// }
// int main()
// {
//     // struct node *p;
//     int a[] = {1, 2, 3, 4, 5};
//     create(a,5);
//     Insert_last(6);
//     Insert_last(7);

//     display(first);
//     return 0;
// }

// we are createing and displaying linked list
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int element)
    {
        data = element;
        next = NULL;
    }
}

    *first = NULL;
void create(int a[], int n)
{
   
    struct node *t, *last;
    first = new node(a[0]);

    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node(a[i]);

        last->next = t;
        last = t;
    }
}

void display(struct node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        // p=p->next;
        display(p->next);
    }
}
void Insert_last(int element)
{

    node *t = new node(element);
    node *p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = t;
}
    int main()
    {
        // struct node *p;
        int a[] = {1, 2, 3, 4, 5};

        create(a, 5);
        Insert_last(6);
        Insert_last(7);

        display(first);
        return 0;
    }