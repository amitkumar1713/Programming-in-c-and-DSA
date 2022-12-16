#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isempty(struct stack *ptr)
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

int isfull(struct stack *ptr)
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

char pop(struct stack *ptr)
{
    char value;
    if (isempty(ptr) == 0)
    {
        value = ptr->arr[ptr->top];
        ptr->top--;
    }
    return value;
}

void push(struct stack *ptr, char value)
{
    if (isfull(ptr) == 0)
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 2;
    }
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
}

int stacktop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

char *pofix(char *infix, struct stack *sp)
{
    int i = 0;
    int j = 0;
    char *pofix=(char *) malloc(strlen(infix + 1) * sizeof(char));
    while (infix[i] != '\0')
    {
        if (!operator(infix[i]))
        {
            pofix[j] = infix[i];
            i++;
            j++;
        }
        else if (precedence(infix[i]) > precedence(stacktop(sp)))
        {
            push(sp, infix[i]);
            i++;
        }
        else
        {
            pofix[j]=pop(sp);
            j++;

        }
        
    }
    while(!isempty(sp))
    {
        pofix[j]=pop(sp);
        j++;
    }
    pofix[j]='\0';
    return pofix;
}

int main()
{
    char*infix="a*b+c*d";
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    printf("The conversion is %s",pofix(infix,sp));
    return 0;

}