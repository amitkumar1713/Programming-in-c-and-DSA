//! Trying to illustrate Queue and its operaions using Arrays.
#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int b;
    int *arr;
};

int isFull(struct queue *ptr)
{
    if (ptr->b == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct queue *ptr)
{
    if (ptr->b == ptr->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *ptr, int value)
{
    ptr->b++;
    ptr->arr[ptr->b] = value;
}

int dequeue(struct queue *ptr)
{
    ptr->f++;
    int value = ptr->arr[ptr->f];

    return value;
}

int main()
{
    struct queue *qp = (struct queue *)malloc(sizeof(struct queue));
    qp->size = 4;
    qp->b = -1;
    qp->f = -1;
    qp->arr = (int *)malloc((qp->size) * sizeof(int));

    printf("Before Operation\n");
    printf("The result of isEmpty function is %d\n",isEmpty(qp));
    printf("The result of isFull function is %d\n",isFull(qp));

    enqueue(qp, 10);
    enqueue(qp, 20);
    enqueue(qp, 30);
    enqueue(qp, 50);

    printf("Removed element from queue is=%d\n", dequeue(qp));
    printf("Removed element from queue is=%d\n", dequeue(qp));
    printf("Removed element from queue is=%d\n", dequeue(qp));
    printf("Removed element from queue is=%d\n", dequeue(qp));
    printf("After operation\n=");
    
    printf("The result of isEmpty function is %d\n",isEmpty(qp));
    printf("The result of isFull function is %d\n",isFull(qp));
    

    return 0;
    
}

