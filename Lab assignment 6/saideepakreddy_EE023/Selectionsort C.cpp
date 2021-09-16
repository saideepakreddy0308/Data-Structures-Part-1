#include<stdio.h>
#include<time.h>
#include<stdlib.h>
double t;

int main()
{
	int i,j,n,temp;
	printf("n=");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d numbers: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
    //selection sort
    t=clock();
    for(i=0;i<n-1;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(arr[i]>arr[j])
    		{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
   			}
    		
		}
	}
	t=clock()-t;
	
	
	printf("sorted elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nTime  = %lf",t/CLOCKS_PER_SEC);
	
	return 0;

}
