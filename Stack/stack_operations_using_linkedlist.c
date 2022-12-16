//! Implementing the opearions of stack using linked list.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*top=NULL;

void linkedtraversal(struct node*ptr){
    
    while(ptr!=NULL)
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int isempty(struct node*top)
{
    if(top==NULL)
    {
        return 1;
    }
    else
    return 0;
}

int isFull(struct node*top){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

struct node* push(struct node*top,int data){
    if(isFull(top)==1)
    {
        printf("Stack Overflow");
    }
    else{
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=top;
        top=top->next;
        ptr=top;
        return top;
    }
}

int pop(struct node*tp){
    if(isempty(tp)==1){
        printf("No data in stack");

    }
    else{
        struct node*ptr=tp;
        top=tp->next;
        int value=ptr->data;
        free(ptr);
        return value;

    }
}

int main()
{
    

    // printf("Before operaion\n");
    // linkedtraversal(top);
    top=push(top,7);
    top=push(top,17);
    top=push(top,18);
    top=push(top,28);
    
    printf("After operaion\n");
    linkedtraversal(top);

    return 0;
}