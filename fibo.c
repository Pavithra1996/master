#include<stdio.h>
#include<conio.h>
int main()
{
int no;
printf("\nEnter a number");
scanf("%d",&no);
for(int i=1;i<=15;i++)
{
	printf("\n%d * %d = %d",no,i,no*i);
}
return 0;
}
