#include<stdio.h>
#include<conio.h>
int count=0;
void shellsort(int arr[],int n)
{
	int gap,i,j,temp;
	count++;
	for( gap= n/2 ;gap > 0;gap /= 2)
     {
	  count++;
	 for(int i = gap; i < n; i +=1)
	 {
	       count++;
	      temp=arr[i];
	      count++;
	      for(j=i; j>=gap && arr[j-gap]>temp;j -=gap)
	 {
		  count++;
		arr[j]=arr[j-gap];
		count++;
	  }
	      count++;
		 arr[j]=temp;
		 count++;
	  }
	  count++;
 }

 }

 int main()
 {
    int a[100],i,n;
     printf("enter size of the array");
     scanf("%d",&n);

    printf("enter the elements of array:\n");
    for(i=0;i<n;++i)
      scanf("%d",&a[i]);

   shellsort(a,n);
   printf("\n this array after applying shell sort:\n");
   for(i=0;i<n;++i)
       printf("%d", a[i]);
   printf("\n for n=%d\n value of count is %d", n, count);
   getch();
   return 0;
  }
