//!Program to TRAVERSE in a single linked list.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void traversal(struct node*ptr){
    while(ptr!=NULL)
    {
        printf("Element=%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    //!Defining and allocating memory in heap for different nodes.
    struct node  *head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));

    //?Linking first and second nodes
    head->data=2;
    head->next=second;

    //? Linking second and third nodes.
    second->data=4;
    second->next=third;

    //?Linking third node.
    third->data=6;
    third->next=NULL;

traversal(head);
return 0;
}



