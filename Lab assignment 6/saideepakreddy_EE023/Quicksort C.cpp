#include<stdio.h>
#include<time.h>
#include<stdlib.h>
double t;

void quicksort(int n[30],int first,int last)
{
	int i,j,pivot,temp;
	
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		
		while(i<j)
		{
			while(n[i]<=n[pivot]&& i<last)
			i++;
			while(n[j]>n[pivot])
			j--;
			if(i<j)
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
				}	
			
		}
	temp=n[pivot];
    n[pivot]=n[j];
    n[j]=temp;
    quicksort(n,first,j-1);
    quicksort(n,j+1,last);

	}
}

int main()
{
	int i,n;
	printf("n = ");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d numbers: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
    //quick sort
    t=clock();
    quicksort(arr,0,n-1);
    t=clock()-t;
    printf("order of sorted elements: ");
    for(i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
	}
	
	printf("\nTime  = %lf",t/CLOCKS_PER_SEC);
	return 0;
}
	
	
	


