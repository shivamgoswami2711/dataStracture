#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Queue
{
    int data;
    struct Queue *next;
};
struct Queue *front = 0, *rear = 0;
void enQueue(int data)
{
    struct Queue *newNode;
    newNode = (struct Queue *)malloc(sizeof(struct Queue));
    newNode->data = data;
    newNode->next = 0;
    if (front == 0 && rear == 0)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
void deQueue()
{
    struct Queue *temp;
    if (front != 0)
    {
        temp = front;
        printf("\ndeQueue: %d", front->data);
        front = front->next;
        free(temp);
    }
    else
    {
        printf("\nQueue is empty");
    }
}
void display()
{
    struct Queue *temp = front;
    while (temp != 0)
    {
        printf("|%d|->", temp->data);
        temp = temp->next;
    }
}
void peek(){
    printf("\nPeek data: %d",front->data);
}

void isempty(){
    if(front == 0){
        printf("\nempty");
    }else{
        printf("\nnot empty");
    }
}

void main()
{
    isempty();
    enQueue(10);
    enQueue(3);
    peek();

    enQueue(4);
    enQueue(5);
    display(); 
    deQueue();
    deQueue();display();isempty();
    deQueue();
    deQueue();
    deQueue();
   isempty();
    getch();
}