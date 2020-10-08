#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 10
#define NIL -1
typedef struct queuetype
{
 int a[100];
 int front;
 int rear;
}
queue;
void main()
{
 int x, item,choice;
      queue q1;
      q1.front= -1;
      q1.rear= -1;
void insertinqueue(queue *,int);
int deletefromqueue(queue *);
int is_full(queue *);
int is_empty(queue *);
while(1)
{
 clrscr();
printf("\n1.Insertion");
printf("\n2.Deletion");
printf("\n3.exit");
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
   {
case 1:
     x=is_full(&q1);
      if(x==1)
      {
       printf("queue is full");
      }
    else
     {
      printf("insert the element");
      scanf("%d",&item);
      insertinqueue(&q1,item);
     }
     break;
case 2:
      x=is_empty(&q1);
       if(x==1)
       {
	printf("queue is empty");
       }
     else
      {
       item=deletefromqueue(&q1);
       printf("delete item is: %d",item);
      }
      break;
case 3:
      exit(1);
default :
      printf("invalid number");
    }
  getch();
  }
 }
int is_full(queue *q)
 {
  if(q->front==1 && q->rear==MAX-1)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
int is_empty(queue *q)
{
 if(q->front== -1 && q->rear == -1)
 {
   return 1;
  }
else
 {
  return 0;
 }
}
void insertinqueue(queue *q,int item)
{
 int i;
  if(q->front== -1 && q->rear==-1)
  {
   q->front=q->front+1;
   q->rear=q->rear+1;
  }
else if(q->rear== MAX-1)
 {
  for(i=q->front;i<=q->rear;i++)
  {
   q->a[i-(q->front)]=q->a[i];
  }
 q->rear=q->rear-q->front;
   q->front=0;
   q->rear=q->rear+1;
  }
 else
  {
   q->rear=q->rear+1;
  }
  q->a[q->rear]=item;
  }
int deletefromqueue(queue *q)
{
  int item;
  item=q->a[q->front];
  if(q->front==q->rear)
  {
   q->front=q->rear= -1;
  }
 else
  {
   q->front=q->front+1;
  }
   return item;
  }


