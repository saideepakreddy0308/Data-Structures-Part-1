//MODIFIED BUBBLE SORT CODE
//Best case in bubble sort is when the complete array is sorted.
//you just compare the adjacent element in the first pass and see how many swaps you did.
//as the complete array is sorted, the number of swaps will be zero.
//clearly if the array is sorted then k=0 at end of first pass.so when the condition is met,we break out of the loop
//since we only pass through n-1 elemnts in the best case,thr time complexity is O(n).
//that is linear which is opposed to the quadratic complexity of bubble sort i.e O(n*n).
// so it has o(n) in its best case.

#include<stdio.h>
void swap(int *i,int *j)
{
	int temp;
	temp=*i;
	*i=*j;
	*j=temp;
}
void bubblesort(int a[],int n)
{
	int i,j;
	int k=1;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				k=0;
				swap(&a[j],&a[j+1]);
			}
		}
		if(k==1)
		{
			printf("\nalready sorted\n");
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int n;
	printf("n:");
	scanf("%d",&n);
	int a[n];
	printf("enter the numbers\n");
	for(int i=0;i<n;i++)
	{
 		scanf("%d",&a[i]);
 	}
	bubblesort(a,n);
}

