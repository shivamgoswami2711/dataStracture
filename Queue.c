#include <stdio.h>
#include <stdbool.h>
#define Max 5
int queue[Max];
int rear = -1, front = -1;

void inqueue(int data)
{
    front++;
    if (front <= Max - 1)
    {

        queue[front] = data;
    }
    else
    {
        printf("\nqueue is over flow");
    }
}
int dequeue()
{
    if (front != -1)
    {
        int temp;
        rear++;
        temp = queue[rear];
        if (rear == front)
        {
            printf("\nqueue is empty");
            rear = -1;
            front = -1;
            return 0;
        }
        return temp;
    }
    else
    {
        printf("\nqueue is over onder flow");
        return 0;
    }
}
int peek()
{
    return queue[rear + 1];
}
bool isEmpty()
{
    if (front == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isfull()
{
    if (front == Max - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void display()
{
    printf("\n element");
    int i = rear==-1?0:rear;
    for (i; i <= front; i++)
    {
        printf("\t%d", queue[i]);
    }
}
void main()
{
    printf("\ndequeue:-%d", dequeue());
    printf(isEmpty() ? "\nempty :- true" : "\nempty :- false");
    printf(isfull() ? "\nfull:- true" : "\nfull:- false");
    inqueue(2);
    inqueue(3);
    inqueue(4);
    inqueue(3);
    inqueue(5);display();
    inqueue(6);
    printf(isfull() ? "\nfull:- true" : "\nfull:- false");
    printf(isEmpty() ? "\nempty :- true" : "\nempty :- false");
    printf("\npeek: %d", peek());
    printf("\ndequeue:-%d", dequeue());
    printf("\ndequeue:-%d", dequeue());
    printf("\ndequeue:-%d", dequeue());
    printf("\ndequeue:-%d", dequeue());
    printf("\ndequeue:-%d", dequeue());
    printf("\ndequeue:-%d", dequeue());
    display();
}
