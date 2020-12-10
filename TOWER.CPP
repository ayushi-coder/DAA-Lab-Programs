#include<stdio.h>
#include<conio.h>

long int count=0;
void main()
{
      void TOH(int ,char,char,char);
	 long int n;
	 clrscr();
	printf("Enter the number of disc");
	  scanf("%d",&n);
	TOH(n,'A','B','C');
	printf("count value is %ld",count);
	getch();
}
void TOH(int n,char a,char b,char c)
{
if(n==1)
{
  printf("move disc 1 feom a %c to b %c",a,b);

}
  else
{
TOH(n-1,a,c,b);
count++;
printf("move disc %d from a %c to b %c",a,b);
count++;
TOH(n-1,c,b,a);
count++;
}
}
