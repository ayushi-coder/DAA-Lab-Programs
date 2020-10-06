
#include<stdio.h>
#include<conio.h>
void main()
      {
	int i,count=0,n,a=0,array[100],search;
	clrscr();
	printf("Enter the number of input");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	 printf("\nEnter element %d\n",i+1);
	 scanf("%d",&array[i]);

	}
	  printf("\Enter the searching element");
	  scanf("%d",&search);
	  count++;
	for(i=0;i<=n;i++)
	{
	count++;
	 if(array[i]==search)
		{
		 count++;
		 a=1;
		 count++;
		 break;

		}
		count++;
	}
	count++;
	if(a==1)
	{
	 printf("\nElement found at location %d",i+1);
	 printf("\ncount=%d",count);

	}
	else
	{
	 printf("\nElement not found");
	 printf("\ncount is %d",count);
	}

	getch();
}

