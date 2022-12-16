//! PreOrder traversal in a Binary Tree.

#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *name = (struct node *)malloc(sizeof(struct node));
    name->data = data;
    name->left = NULL;
    name->right = NULL;
}

void preoderTraversal(struct node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preoderTraversal(root->left);
        preoderTraversal(root->right);
    }
}
void postorderTraversal(struct node *root)
{
    if (root != NULL)
    {

        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d", root->data);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);

        printf("%d", root->data);

        inorder(root->right);
    }
}
int main()
{

    struct node *p = createnode(7);
    struct node *p1 = createnode(2);
    struct node *p2 = createnode(1);
    struct node *p3 = createnode(0);
    struct node *p4 = createnode(4);
    struct node *p5 = createnode(1);
    p->left = p1;
    p->right = p2;
    p1->left=p3;
    p1->right=p4;
    p2->right=p5;
    printf("Preorder=\n");
    preoderTraversal(p);
    printf("\nPostorder=\n");
    postorderTraversal(p);
    printf("\nInorder=\n");
    inorder(p);

    return 0;
}
