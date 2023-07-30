#include <iostream>
using namespace std;
#include <bits/stdc++.h>

struct node {
  struct node *leftchild;
  int data;
  struct node *rightchild;
} *root = NULL;

void insert(int key) {
  node *t = root;
  node *r, *temp;
  if (root == NULL) {
    temp = new node;
    temp->data = key;
    temp->leftchild = temp->rightchild = NULL;
    root = temp;
    return;
  }
  while (t != NULL) {
    if (key == t->data) {
      cout << "element is already present .";
      return;
    } else if (key < t->data) {
      r = t;
      t = t->leftchild;

    } else {
      r = t;
      t = t->rightchild;
    }
  }
  temp = new node;
  temp->data = key;
  temp->leftchild = temp->rightchild = NULL;
  if (temp->data < r->data) {
    r->leftchild = temp;
  } else {
    r->rightchild = temp;
  }
}
void inorder(node *p) {
  if (p) {
    inorder(p->leftchild);
    cout << p->data << " ";
    inorder(p->rightchild);
  }
}
int main() {
  int a;
  cout << "NO of element want to insert : " << endl;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int x;
    cin >> x;
    insert(x);
  }
  inorder(root);
}