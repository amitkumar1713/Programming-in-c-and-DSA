//!Code to illustrate all kinds of deletion in a single linked list.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void traversal(struct node*ptr){
    
    while(ptr!=NULL)
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node*deleteAtFirst(struct node*head){
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;

}

struct node*deleteAtIndex(struct node*head,int index){
    struct node*p=head;
    struct node*q=head->next;
    
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct node*deleteAtlast(struct node*head)
{
    struct node*p=head;
    struct node*q=head->next;

    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct node*deleteAfterValue(struct node*head,int value)
{
    struct node*p=head;
    struct node*q=head->next;
    // int flag=0;
    while(q->data!=value&& q->next!=NULL)
    {
        p=p->next;
        q=q->next;
        
    }
    
    if(q->data==value){

    p->next=q->next;
    free(q);
    }
    return head;
    

}
int main()
{
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    struct node*fourth=(struct node*)malloc(sizeof(struct node));
    
    head->data=2;
    head->next=second;
    
    second->data=5;
    second->next=third;
    
    third->data=8;
    third->next=fourth;
    
    fourth->data=9;
    fourth->next=NULL;

    printf("Before Deletion\n=");

    traversal(head);
    // head=deleteAtFirst(head);
    //head=deleteAtIndex(head,2);
    //head=deleteAtlast(head);
    head=deleteAfterValue(head,43);
    printf("After Deletion=\n");
    traversal(head);

    return 0;

}