#include <Stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *next;
};

struct node *head, *newnode, *temp, *prenode;
void display()
{
   temp = head;
   while (temp != 0)
   {
      printf("|%d|->", temp->data);
      temp = temp->next;
   }
}
void 


create()
{
   head = 0;
   int repeat = 1;
   while (repeat)
   {

      newnode = (struct node *)malloc(sizeof(struct node));
      if (head == 0)
      {
         head = temp = newnode;
      }
      else
      {
         temp->next = newnode;
         temp = newnode;
      }
      printf("\nenter value:-");
      scanf("%d", &newnode->data);
      newnode->next = 0;
      printf("\naad one more 1 or eixt o:-");
      scanf("%d", &repeat);
   }
}

int length()
{
   temp = head;
   int count = 0;
   struct node *temp = head;
   while (temp != 0)
   {
      count++;
      temp = temp->next;
   }
   return count;
}
void addLast()
{
   temp = head;
   int data;
   printf("\nenter data:-");
   scanf("%d", &data);
   while (temp->next != 0)
   {
      temp = temp->next;
   }
   newnode = (struct node *)malloc(sizeof(struct node));
   newnode->data = data;
   newnode->next = 0;
   temp->next = newnode;
}

// insert valune
void insart()
{
   temp = head;
   int data, position, count = 1, ListLength = 0, endFlag = 1;
   printf("\nenter data position:-");
   scanf("%d", &position);
   while (temp != 0 && position >= count)
   {
      printf("temp:- %d  po:-%d cou:%d", temp->data, position, count);
      ListLength = length();
      if (ListLength >= position)
      {
         if (count == position - 1)
         {
            printf("\nenter data:-");
            scanf("%d", &data);
            newnode = (struct node *)malloc(sizeof(struct node));

            newnode->next = temp->next;
            printf("temp data:-%d", temp->data);
            newnode->data = data;
            temp->next = newnode;
         }
         temp = temp->next;
         count++;
      }
      else
      {
         printf("\nlength only:-%d", ListLength);
         printf("\nadd value in lest position(yes-1 or no-0):-");
         scanf("%d", &endFlag);
         if (endFlag == 1)
         {
            addLast();
            printf("\nadd vlue in last");
         }
      }
   }
}
void delete ()
{
   temp = head;
   int position, count = 1, ListLength = 0;
   printf("\nenter delete position:-");
   scanf("%d", &position);
   ListLength = length();
   if (ListLength >= position)
   {
      if(position == 1){
            head=temp->next;
            printf("data:-%d",temp->data);
            free(temp);
         }
      while (temp != 0 && position >= count)
      {
         if (position - 1 == count)
         {
            prenode = temp->next;
            temp->next = temp->next->next;
            printf("data:-%d",prenode->data);
            free(prenode);
         }
         else if (ListLength == position)
         {
            prenode = temp->next;
            temp->next = 0;
            printf("data:-%d",prenode->data);
            free(prenode);
         }
         temp = temp->next;
         count++;
      }
   }
   else
   {
      printf("\n length only:-%d", ListLength);
   }
}

int options()
{
   int option;
   printf("\n1. create\n2. display\n3. insart\n4. add in lest posetion\n5. delete\n6. length\n7. exit\nenter option:-");
   scanf("%d", &option);
   return option;
}
void main()
{
   while (1)
   {
      switch (options())
      {
      case 1:
         create();
         break;
      case 2:
         display();
         break;
      case 3:
         insart();
         break;
      case 4:
         addLast();
         break;
      case 5:
         delete ();
         break;
      case 6:
         printf("\nlength:-%d", length());
         ;
         break;
      case 7:
         exit(0);
         break;

      default:
         printf("please select correct value");
         break;
      }
   }
}
