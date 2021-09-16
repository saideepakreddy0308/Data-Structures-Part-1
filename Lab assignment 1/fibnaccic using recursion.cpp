#include<stdio.h>
int fib(int);
int main()
{
int  n,result;
printf("enter the nth value needed: \n");
scanf("%d",&n);
if(n<0){
printf("error!!!!!!!!!!\n");
}
else
{
	result=fib(n);
	printf("%d",result);
}
return 0;
}
	int fib(int n)
	{
		if(n==1)
		{
		return 0;
		}
		else if(n==2)
		{
		return 1;
		}
		else 
		{
			return(fib(n-1)+fib(n-2));
		}
	}

