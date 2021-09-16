#include<stdio.h>
#include<time.h>
#include<stdlib.h>
double t;

int main()
{
	int i,j,n,temp;
	printf("n = ");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d numbers: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		
    //insertion sort
   	t=(double)clock();
    for(i=1;i<n;i++)
    {
    	temp=arr[i];
    	j=i-1;
    	while((arr[i]<arr[j]) && (j>=0) )
    	{
    		arr[j]=arr[j+1];
    		j=j-1;
		}
		arr[j+1]=temp;
	}
   	t=(double)(clock()-t);
    printf("order of the elements:");
    for(i=0;i<n;i++)
    {
    	printf("%d",arr[i]);
	}
	printf("\nTime  = %lf",t/CLOCKS_PER_SEC);

	return 0;

