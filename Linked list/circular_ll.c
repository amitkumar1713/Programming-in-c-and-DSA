//!PRogram to illustrate circular Linked list.

#include<stdio.h>
#include<stdlib.h>

//!Creation of circular linked list.
struct node{
    int data;
    struct node*next;

};

//!Traversal in Circular Linked list.
void circulartraversal(struct node*head)
{
    
    struct node*ptr=head;
    do
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    
}

struct node*insertAtFirst(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    struct node*p=head;
    do
    {
        p=p->next;
    } while (p->next!=head);
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

//!Insertion at index
struct node*insertAtIndex(struct node*head,int data,int index)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head;
    for(int i=0;i=index-1;i++)
    {
        p=p->next;

    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}


int main()
{
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    struct node*fourth=(struct node*)malloc(sizeof(struct node));

    //!Linking nodes

    head->data=1;
    head->next=second;

    second->data=7;
    second->next=third;
    
    third->data=17;
    third->next=fourth;
    
    fourth->data=13;
    fourth->next=head;

    printf("Before insertion=\n");
    circulartraversal(head);
    printf("After insertion=\n");
    // head=insertAtFirst(head,80);
    head=insertAtIndex(head,22,2);
    circulartraversal(head);

}