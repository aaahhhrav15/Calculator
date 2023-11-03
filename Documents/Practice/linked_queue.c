#include <stdio.h>
#include <stdlib.h>
int queue[50];
struct node
{
    int data;
    struct node *next;
} *rear, *front, *temp, *newnode;
void enqueue()
{
    int value;
    printf("Enter value to be enqueued\n");
    scanf("%d", &value);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    if (front == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue()
{
    if (front == NULL)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
}
void display()
{
    temp = front;
    if (front == NULL)
    {
        printf("Empty queue\n");
    }
    else
    {
        printf("Elements in queue are:\n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int n;
    do
    {
        printf("Enter choice\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exitting...\n");
            break;
        default:
            printf("Wrong choice..\n");
        }
    } while (n != 4);
}