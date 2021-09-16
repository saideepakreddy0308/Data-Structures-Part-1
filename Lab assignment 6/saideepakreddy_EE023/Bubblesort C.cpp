#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

double t;

void swap(int *p,int *q)
{
	int temp=*p;
	*p=*q;*q=temp;
}	
int main()
{
	int n,i,j;
	printf("n=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	t=(double)clock();
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1] )
			{
				swap(&a[j],&a[j+1]);
			}
			
		}
	}
	t=(double)(clock()-t);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nTime  = %lf",t/CLOCKS_PER_SEC);

}
