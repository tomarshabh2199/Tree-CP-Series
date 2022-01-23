#include<bits/stdc++.h>
using namespace std;

Struct Node{
    int data;
    Struct Node *left;
    Struct Node *right;

    Node(int val)
    {
        data= val;
        left=right= null;
    }
}


int main()
{
    Struct Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->right= new Node(4);
}