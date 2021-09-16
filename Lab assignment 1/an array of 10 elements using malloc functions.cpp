 #include<stdio.h>
 #include<stdlib.h>
 main()
 {
 	int *ptr;
 	int n,i;
 	printf("enter the size of an array :  \t");
 	scanf("%d",&n);
 	ptr=(int*)malloc(n*sizeof(int));
 	for(i=0;i<n;i++)
 	{
 	scanf("%d",&ptr[i]);
	 }
 	for(i=0;i<n;i++)
 	{
 	printf("%d \t",ptr[i]);
	}
 }
