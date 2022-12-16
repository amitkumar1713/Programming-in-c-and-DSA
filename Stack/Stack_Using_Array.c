//! Stack implementation using Array.

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr; //?Cause i want to create a int type pointer array to allocate memory in heap.
};

int isEmpty(struct stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *sp)
{
    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *sp, int value)
{
    if (isFull(sp) == 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = value;
    }
}
void pull(struct stack *ptr)
{
    if (isEmpty(ptr) == 1)
    {
        printf("Stack UNDERFLOW");
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack)); //* sp-address but data ke liye space to chahiye na
    sp->size = 6;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("The result of ISFULL=%d\n", isFull(sp));
    printf("The result of IsEmpty=%d\n", isEmpty(sp));
    push(sp, 21);
    push(sp, 22);

    // pull(sp);
    printf("The result of ISFULL=%d\n", isFull(sp));
    printf("The result of IsEmpty=%d\n", isEmpty(sp));
    return 0;
}