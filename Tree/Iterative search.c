//! Iterative search in a BST.
//! Searching in a BST.

#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node*left;
    struct node*right;

};

struct node* createnode(int data)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}
void preorder(struct node*root){
    if(root!=NULL)
    {
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

struct node* itsearch(struct node*root,int key){
    while (root!=NULL)
    {
        if (key==root->data)
        {
            return root;
        }
        else if(key>root->data){
            root=root->right;
        }
        else
        {
            root=root->left;
        }
        
        
    }
    return NULL;
    
    
}


int main(){
    struct node*p=createnode(12);
    struct node*p1=createnode(10);
    struct node*p2=createnode(14);
    struct node*p3=createnode(8);
    struct node*p4=createnode(11);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    preorder(p);
    struct node*r=itsearch(p,8);
    if (r!=NULL)
    {
        printf("Got it=%d",r->data);
    }
    else
    {
        printf("Not found");
    }
    
    
    
    return 0;
}