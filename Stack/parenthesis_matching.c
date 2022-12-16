//!  Parenthesis matching

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, char value)
{
    if (isFull(ptr) == 1)
    {
        printf("Stack is FULL");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr) == 1)
    {
        printf("Cannot pop as the stack is Empty\n");
        return 0;
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int parenthesisMAtching(char *exp,struct stack*sp)
{

    for (int i = 0; exp[i] != '\0'; i++)
    {

        if (exp[i] == '(')
        {
            push(sp, '(');
        }

        else if (exp[i] == ')')
        {
            if(pop(sp)==0){
                return 0;
                continue;
            }
        }
    }
    if (isEmpty(sp) == 1)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    char *exp = "(1*(8-3(7))";

    if (parenthesisMAtching(exp,sp) == 1)
    {
        printf("a balanced expression");
    }
    else
    {
        printf("Not a balanced expression.");
    }

    return 0;
}