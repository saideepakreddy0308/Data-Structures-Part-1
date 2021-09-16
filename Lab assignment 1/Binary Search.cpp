#include<stdio.h>
main()
{
	int i,f1,l1,mid,n,k,a[100];
	printf("enter the size of the array : \t");
	scanf("%d",&n);
	printf("enter the array elements: \t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the value to search:  \t");
	scanf("%d",&k);
	f1=0;
	l1=n-1;
	mid=(f1+l1)/2;
	while(f1<=l1)
	{
		if(a[mid]<k)
		f1=mid+1;
		else if(a[mid]==k){
		printf("%d found at %d",k,mid+1);
		break;
	    }
	    else
	    l1=mid-1;
	    mid=(f1+l1)/2;
	}
	if(f1>l1)
	printf("oops! not found \n");
}
