#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 5
#define NIL -1
typedef struct queuetype
{
 int a[5];
 int front;
 int rear;
}
queue;
void main()
{
 int x, item,choice;
      queue cq;
      cq.front= -1;
      cq.rear= -1;
void insertincqueue(queue *,int);
int deletefromcqueue(queue *);
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
     x=is_full(&cq);
      if(x==1)
      {
       printf("queue is full");
      }
    else
     {
      printf("insert the element");
      scanf("%d",&item);
      insertincqueue(&cq,item);
     }
     break;
case 2:
      x=is_empty(&cq);
       if(x==1)
       {
	printf("queue is empty");
       }
     else
      {
       item=deletefromcqueue(&cq);
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
int is_full(queue *cq)
 {
  if((cq->front==0 && cq->rear==MAX-1)||(cq->front-cq->rear==1))
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
int is_empty(queue *cq)
{
 if(cq->front== -1 && cq->rear == -1)
 {
   return 1;
  }
else
 {
  return 0;
 }
}
void insertincqueue(queue *cq,int item)
{
 int i;
  if(cq->front== -1 && cq->rear==-1)
  {
   cq->front=cq->front+1;
   cq->rear=cq->rear+1;
  }
else if(cq->rear== MAX-1)
 {
  cq->rear=0;
  }
 else
  {
   cq->rear=cq->rear+1;
  }
  cq->a[cq->rear]=item;
  }
int deletefromcqueue(queue *cq)
{
  int item;
  item=cq->a[cq->front];
  if(cq->front==cq->rear)
  {
   cq->front=cq->rear=-1;
  }
  else if(cq->front==MAX-1)
  {
  cq->front=0;
  }
 else
  {
   cq->front=cq->front+1;
  }
   return item;
  }


