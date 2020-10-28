#include<stdio.h>
#include<conio.h>
#include<string.h>

void lcs(char x[], char y[])
{
   int i,j,m,n,c[51][51];
   char b[51][51];
    m=strlen(x);
    n=strlen(y);
    for(i=1;i<=m;i++)
	    c[i][0]=0;
    for(i=0;i<=n;i++)
	    c[0][i]=0;
    for(i=1;i<=m;i++)
    {
       for(j=1;j<=m;j++)
       {
	   if(x[i-1]==y[j-1])
	   {
	      c[i][j]=c[i-1][j-1]+1;
	      b[i][j]='92';
	    }
	    else if(c[i-1][j]>=c[i][j-1])
	    {
		   c[i][j]=c[i-1][j];
		   b[i][j]=24;
	     }
	    else
	    {
	       c[i][j]=c[i-1][j];
	       b[i][j]='60';
	    }
	 }
     }
     for(i=0;i<=m;i++)
     {
       for(j=0;j<=n;j++)
       {
	  printf("%d",c[i][j]);
       }
	 printf("\n");
      }


      for(i=1;i<=m;i++)
      {
	 for(j=1;j<=n;j++)
	 {
	   printf("%c",b[i][j]);
	 }
	 printf("\n");
       }
    }
  void  main()
  {
    int i,j,m,n,c[50][50];
    char x[50],y[50],b[50][50];
    printf("enter first string:");
    scanf("%s",x);
    printf("enter second string:");
    scanf("%s",y);

    lcs(x,y);

getch();
}



