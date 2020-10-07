#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>
#include<stdlib.h>
#include<time.h>
  int count=0;
  int partition(int[],int,int);
  void quicksort(int[],int,int);
  void main()
 {

  void getdata(int a[],int n);
  void putdata(int a[],int n);

	int myrand(int,int);
	int a[100],n,i;
	clrscr();
	printf("enter the size of an array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");

	getdata(a,n);
	 printf("\n before sorting");
	 putdata(a,n);
	 quicksort(a,1,n);
	 printf("\n after sorting");
	 putdata(a,n);
	 printf("\n for n = %d value of count is %d",n,count);
	 getch();
    }
     void getdata(int a[],int n)
    {
     int i;
     printf("enter the value for sorting");
     for(i=1;i<=n;i++)
     {
      scanf("%d", &a[i]);
      }
    }
   void putdata(int a[],int n)
 {
    int i;
     for(i = 1;i<=n;i++)
     {
     printf("%d\t",a[i]);
     }
     printf("\n");
  }
  void quicksort(int a[],int p, int r)
  {
  count++;
  if(p<r)
  {
    int q;
    q =partition(a,p,r);
    count++;
    quicksort(a,p,q-1);
    count++;
    quicksort(a,q+1,r);
    count++;
    }
    count++;
    }
   int myrandom(int lower,int upper)
   {
	int num;
	srand(time(0));
	num = (rand() % (upper - lower +1)) + lower;
	return num;
   }
   int partition(int a[], int p, int r)
   {
       int pivot,y,i,j,temp;
       y=myrandom(p,r-1);
       temp=a[y];
       a[y]=a[r];
       a[r]=temp;
       pivot=a[r];
       i=p-1;
       count++;
   for(j=p;j<=r-1;j++)
   {
   count++;
     if(a[j]<pivot)
     {
     count++;
     i=i+1;
     count++;
     temp=a[i] ;
     count++;
     a[i]=a[j];
     count++;
     a[j]=temp;
     count++;
   }
}
   count++;
   temp=a[i+1];
   count++;
   a[i+1]=a[r];
   count++;
   a[r]=temp;
   count++;
   return(i+1);

  }