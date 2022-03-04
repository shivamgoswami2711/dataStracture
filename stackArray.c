#include <Stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
int top = -1;
int stack[MAX];
void push(){
    int value;
    if (top<=MAX-1)
    {
        printf("\nenter value:-");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }else{
        printf("stack is overflow");
    }

}
int pop(){
    int value;
    value=stack[top];
    top--;
    return value;
}
int peek(){
    return stack[top];
}
void display(){
    printf("\nvalue:-");
    for (int i = top; i > -1; i--)
    {
        printf("\t%d",stack[i]);
    }
}
int options(){
    int option;
    printf("\n1. push\n2. display\n3. peek\n4. pop\n5. exit\nchoose option:-");
    scanf("%d",&option);
    return option;
}
void main()
{
    while (1)
    {
       switch (options())
       {
       case 1:
           push();
           break;
       case 2:
           display();
           break;
       case 3:
           printf("\npeek:-%d",peek());
           break;
       case 4:
           printf("\npop:-%d",pop());
           break;
       case 5:
           exit(0);
           break;
       
       default:
       printf("please select correct option");
           break;
       }
    }
    
    push();
    push();
    display();
    printf("\npop:-%d",pop());
    printf("\npeek:-%d",peek());
    push();
    printf("\npeek:-%d",peek());
    display();
    getch();
}