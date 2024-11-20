#include <stdio.h>
#define size 10

typedef struct Queue
{
    int queue[size];
    int front, rear

} Queue;

void insert(int num, Queue *q)
{
    if (q->rear == size - 1)
    {
        printf("Queue overflow");
    }
    else
    {
        q->rear++;
        q->queue[q->rear] = num;
    }
}

void delete(Queue *q)
{
    if (q->front == q->rear)
    {
        printf("Queue empty");
    }
    else
    {
        q->front++;
    }
}

int main()
{
    Queue q;
    q.front = q.rear = -1;
    int option;
    printf("Press 1 to insert\nPress 2 to delete\nPress 3 to exit\nEnter your choice:");
    scanf("%d", &option);
    while (option != 3)
    {
        switch (option)
        {
        case 1:
            if (q.rear == size - 1)
            {
                printf("Queue overflow ");
            }
            else
            {
                int num;
                printf("Enter the number: ");
                scanf("%d", &num);
                insert(num, &q);
            }
            break;
        case 2:
            if (q.front == q.rear)
            {
                printf("Queue empty");
            }
            else
            {
                int temp = q.queue[q.front + 1];
                printf("Deleted element is %d", temp);
                delete (&q);
            }
            break;
        default:
            printf("Invalid choice");
            break;
        }
        printf("Enter the choice:");
        scanf("%d", &option);
    }
}