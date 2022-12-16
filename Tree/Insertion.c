//! Insertion in a Binary Search Tree.

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
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}

void insertion(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("\n!!!!!!Cannot do insertion of %d!!!!!!!!!!!", key);
            break;
            
        }
        else if (key > root->data)
        {
            root = root->right;
            
        }
        else
        {
            root = root->left;
            
        }
    }
    struct node *new =createnode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

void preorder(struct node*root){
    if(root!=NULL){
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}



int main()
{
    struct node *p1 = createnode(22);
    struct node *p2 = createnode(20);
    struct node *p3 = createnode(24);
    struct node *p4 = createnode(18);
    struct node *p5 = createnode(21);
    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;
    printf("Before Insertion\n");
    preorder(p1);
    insertion(p1,30);
    printf("\nAfter Insertion\n");
    preorder(p1);
    
    return 0;
}