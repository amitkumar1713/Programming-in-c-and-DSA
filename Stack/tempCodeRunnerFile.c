//!  Parenthesis matching

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char*arr;
};

int isEmpty(char*ptr){
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;
}

int isFull(char*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(char*ptr,char value)
{
    if(isFull(ptr)==1)
    {
        printf("Stack is FULL");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

char pop(char*ptr)
{
    if(isEmpty(ptr)==1)
    {
        printf("Cannot pop as the stack is Empty");
    }
    else{
        char value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int main()
{
    char*exp="(8*5)-(6*2))";
    struct stack*sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    return 0;

}