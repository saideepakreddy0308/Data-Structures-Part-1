#include <stdio.h>

main()
{
    int a[100],f[100];
    int n, i, j, count;
	
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&a[i]);
		  f[i] = -1;
	    }
    
	for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                f[j] = 0;
            }
        }

        if(f[i]!=0)
        {
            f[i] = count;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(f[i]!=0)
        {
            printf("%d occurs %d times\n", a[i], f[i]);
        }
    }
}
