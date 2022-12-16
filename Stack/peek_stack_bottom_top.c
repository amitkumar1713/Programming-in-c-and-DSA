//! Creation of peek.

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int*arr;
};

int isEmpty(struct stack*sp){
    if(sp->top==-1)
    return 1;
}
int isFull(struct stack*sp){
    if(sp->top==sp->size-1)
    return 1;
}

void push(struct stack*sp,int value)
{
    if(isFull(sp)==1)
    {
        printf("STACK OVERFLOW\n");
    }
    else{
        sp->top++;
        sp->arr[sp->top]=value;
    }
}
int pull(struct stack*sp)
{   
    int value;
    if(isEmpty(sp)==1)
    {
        printf("STACK UNDERFLOW\n");
    }
    else{
        value=sp->arr[sp->top];
        sp->top--;
    }
    return value;
}



int peek(struct stack*sp,int i)
{
    int topp=sp->top-i+1;
    if(sp->arr[topp]<0)
    {
        printf("Invalid input");
    }
    else
    return sp->arr[topp];
}

int stacktop(struct stack*sp)
{
    return sp->arr[sp->top];
}
int stackbottom(struct stack*sp)
{
    return sp->arr[0];
}
int main(){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    push(sp,2);
    push(sp,4);
    push(sp,9);
    push(sp,7);
    int i=4;
    // printf("The value at position %d is %d",i,peek(sp,i));
    printf("The topmost element of the stack=%d\n",stacktop(sp));
    printf("The Bottommost element of the stack=%d\n",stackbottom(sp));
    return 0;
}