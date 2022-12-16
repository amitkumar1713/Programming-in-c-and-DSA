//!Program to demonstrate deletion in a Binary Search Tree.

#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*createnode(int data){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;

}
void inorder(struct node*root){
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}

struct node*predecessor(struct node*root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}


struct node* deletion(struct node*root,int key){
    struct node*pred;
    if (root==NULL)
    {
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL)
    {
        free(root);
        return NULL;
    }

    
    if (key>root->data)
    {
        
        root->right=deletion(root->right,key);
    }
    else if(key<root->data)
    {
    
        root->left=deletion(root->left,key);
    }
    else 
    {
        pred=predecessor(root);
        root->data=pred->data;
        root->left=deletion(root->left,pred->data);
    }
    return root;
    
    
    
}

int main(){
    struct node*p1=createnode(20);
    struct node*p2=createnode(18);
    struct node*p3=createnode(22);
    struct node*p4=createnode(16);
    struct node*p5=createnode(19);
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    printf("Before Deletion=");
    inorder(p1);
    printf("After Deletion=");
    // deletion(p1,19);
    inorder(p1);
    
    printf("\n%d",result->data);
    return 0;
}