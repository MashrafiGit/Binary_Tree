#include <bits/stdc++.h>
using namespace std;

class BiNode
{
public:
    int val;
    BiNode *left;
    BiNode *right;

    BiNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(BiNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{

    BiNode *root = new BiNode(10);
    BiNode *a = new BiNode(20);
    BiNode *b = new BiNode(30);
    BiNode *c = new BiNode(40);
    BiNode *d = new BiNode(50);
    BiNode *e = new BiNode(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    preOrder(root);

    return 0;
}