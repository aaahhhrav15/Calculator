#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *top=NULL,*newnode;
void push()
{
    int val;
    printf("Enter element to push\n");
    scanf("%d",&val);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d is popped\n",newnode->data);
        top=newnode->next;
        free(newnode);
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is %d\n",newnode->data);
    }
}
void display()
{
    struct node *temp=top;
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    int n;
    while (n != 5)
    {
        printf("Enter your choice\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exitting...\n");
            break;
        default:
            printf("Wrong input\n");
        }
    }
    return 0;
}