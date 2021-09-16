#include<stdio.h>
main()
{
	int n,s,i;
	printf("Enter the no of elmemnts :  ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search in the array :  ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("found....");
			return 0;
		}
	}
	printf("not found....");
}
