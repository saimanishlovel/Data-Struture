using namespace std;
#include<iostream>
#include <bits/stdc++.h>
struct node {
  struct node *leftchild;
  int data;
  struct node *rightchild;

} *root = NULL;
void create(vector<int> b, int a) {
  struct node *last;
  if (root == NULL) {
    root = new node;
    root->data = b[0];
    root->leftchild = root->rightchild = NULL;
    last = root;
  }
  //   int i = 1;
  struct node *r, *temp;
  for (int i = 1; i < a; i++) {
    int key = b[i];
    last = root;
    while (last != NULL) {
      if (last->data < key) {
        r = last;
        last = last->leftchild;
      } else {
        r = last;
        last = last->rightchild;
      }
    }
    temp = new node;
    temp->data = key;
    temp->leftchild = temp->rightchild = NULL;
    if (r->data > temp->data) {
      r->leftchild = temp;
    } else {
      r->rightchild = temp;
    }
  }
}
void preorder(struct node *p) {
  if (p) {
    cout << p->data << " ";
    preorder(p->leftchild);
    preorder(p->rightchild);
  }
}
void inorder(node *p){
  if(p){
    inorder(p->leftchild);
    cout<<p->data<<" ";
    inorder(p->rightchild);
  }
}
int main() {
  int a;
  cin >> a;
  vector<int> b(a);
  for (int i = 0; i < a; i++) {
    cin >> b[i];
  }
  create(b, a);
  preorder(root);
  inorder(root);
}