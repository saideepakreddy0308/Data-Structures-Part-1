#include<stdio.h>
#include<string.h>
main()
{
	int i,l1,l2,max=0,index=0,l3,ext=0,j;
	char a[20],b[20],c[20],d[20];
	printf("enter the statement : \n");
	gets(a);
	printf("enter the substring to be replaced: \n");
	gets(b);
	printf("enter the string you want to place: \n");
 	gets(c);
	l1=strlen(a);
	l2=strlen(b);
	max=l1-l2;
	for(i=0;i<=max;i++)
	{
		if(strncmp(a+i,b,l2)==0)
		break;
	}
	index=i;
	printf("%d\n",index);
	l3=strlen(c);
    ext=l3-l2;
    l1=l1+ext;
    for(i=0;i<index;i++)
    {
    	d[i]=a[i];
	}
	for(i=index,j=0;i<index+l3,j<l3;i++,j++)
	{
		d[i]=c[j];
	}
	for(int i=index+l3,j=index+l2;i<l1+ext,j<l1+ext;i++,j++)
			{
				d[i]=a[j];
			}
	puts(d);
    
	} 
	

