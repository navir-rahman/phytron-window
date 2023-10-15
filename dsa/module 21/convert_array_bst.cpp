#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// level order
void lavel_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // ber kore ano
        Node *p = q.front();
        q.pop();

        // jabotio kaj
        cout << p->val << " ";
        // children push koro

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

// input tree
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // ber kore ano
        Node *p = q.front();
        q.pop();

        // jabotio kaj
        int l, r;
        cin >> l >> r;
        Node *Myleft;
        Node *Myright;
        if (l == -1)
            Myleft = NULL;
        else
            Myleft = new Node(l);

        if (r == -1)
            Myright = NULL;
        else
            Myright = new Node(r);

        p->left = Myleft;
        p->right = Myright;
        // children push koro

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void insert(Node *&root, int x)
{
    if(root==NULL){
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}

Node* convert(int a[], int n, int l, int r){
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node* root=new Node(a[mid]);
    Node* leftroot= convert(a, n, l, mid - 1);
    Node* rightroot=convert(a, n, mid+1, r);
    root->left=leftroot;
    root->right= rightroot;
    return root;
}
int main()
{
    Node *root = input_tree();
    // lavel_order(root);
    int x;
    cin >> x;
    insert(root, x);
    lavel_order(root);

    return 0;
}