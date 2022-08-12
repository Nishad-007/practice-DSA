#include <iostream>
#include "bits/stdc++.h"

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

/*
          1
        /   \
       2     3
      / \   / \
     4   5 6   7
*/

// Inorder => Left, Root, Right.

// Preorder => Root, Left, Right.

// Post order => Left, Right, Root.


// PRE-ORDER traversal
void preorder( Node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// IN-order traversal
void inorder( Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// POST-order traversal
void postorder( Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

      preorder(root);
      cout<<endl;
      inorder(root);
      cout<<endl;
      postorder(root);

    return 0;
}