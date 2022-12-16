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
    if (isFull(ptr) == 0)
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr) == 0)
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int match(char a, char b)
{
    if (a=='('&& b==')'||a=='{'&& b=='}'||a=='['&&b==']')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int multparentmatching(char *exp, struct stack *sp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            if (isFull(sp) == 0)
            {
                push(sp, exp[i]);
            }
        }

        else if (exp[i] == ')' || exp[i] == '}' ||exp[i] == ']')
        {
            if (isEmpty(sp) == 0)
            {
                char popped=pop(sp);
                if(match(popped,exp[i])==0)
                {
                    return 0;
                }
            }
        }
    }

    if (isEmpty(sp) == 1)
    {

        return 1;
    }
}

int main()
{
    char*exp = "3*2-(8+1)";
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    if (multparentmatching(exp, sp) == 1)
    {
        printf("Balanced Parenthesis");
    }
    else
    {
        printf("Unbalanced Parenthesis");
    }

    return 0;
}