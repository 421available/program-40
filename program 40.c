#include<stdio.h>
int sum(int n);
void main()
{
	int num,add;
	printf("Enter a positive integer:");
	scanf("%d",&num);
	printf("sum =%d",sum(num));
}
int sum(int n)
{
if(n==0)	
return n;
else
return n+sum (n-1);
}
