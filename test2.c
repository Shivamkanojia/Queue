// queue
#include <stdio.h>
#define MAX 5
int q[MAX];
int front = -1;
int rear = -1;
void insert();
int delete_element();
int peek();
void display();

int main()
{
    display();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    display();
    printf("peeked elemen is %d\n", peek());
    printf("deleted elemen is %d\n", delete_element());
    printf("deleted elemen is %d\n", delete_element());
    printf("deleted elemen is %d\n", delete_element());
    printf("deleted elemen is %d\n", delete_element());
    printf("deleted elemen is %d\n", delete_element());
    display();
    return 0;
}

void insert()
{
    int val;
    printf("eneer value \n");
    scanf("%d", &val);
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        q[rear] = val;
        printf("%d\n", val);
    }
    else if (rear == MAX - 1)
    {
        printf("queue is full \n");
    }
    else
    {
        rear++;
        q[rear] = val;
        printf("elemen insered sucessfully\n");
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty,underflow condition\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", q[i]);
        }
    }
}
int peek()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow condition\n");
    }
    else
    {
        return q[front];
    }
}
int delete_element()
{
    int val;

    if (front == -1 || front > rear)
    {
        printf("underflow condition\n");
        return -1;
    }
    else
    {
        val = q[front];
        front++;
        if (front > rear)
        {
            front = rear = -1;
            printf("underflow condition\n");
        }
        return val;
    }
}