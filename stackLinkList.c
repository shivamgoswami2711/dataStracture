#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int top = 0;
struct node
{
    int data;
    struct node *next;
};

struct node *head, *temp, *newNode;
void create()
{
    head = 0;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (head == 0)
    {
        head = newNode;
        newNode->next = 0;
    }
    printf("\nenter data:-");
    scanf("%d", &newNode->data);
}
void push()
{
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->next = head;
    head = newNode;
    printf("\nenter data:-");
    scanf("%d", &newNode->data);
}
int pop()
{
    int data;
    temp = head; 
    data = head->data;
    head = head->next;
   
    free(temp);
    return data;
}
void display()
{
    temp = head;
    printf("\nvalue:-");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int peek()
{
    int data = head->data;
    return data;
}
void main()
{
    create();
    push();
    push();
    push();
    display();
    printf("\npop:-%d", pop());
    printf("\npeek:-%d", peek());
    display();
    getch();
}