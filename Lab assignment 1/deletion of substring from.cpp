#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void func(char *p,int size1,int k,char *q,int size2)
{
	int i,f,j=0,var=0;
	for(i=k;i<k+size2;i++)
	{
		if(p[i]==q[j])
		{
			var++;
			j++;
		}
	}
	if(var==size2)
	{
		for(f=k;f<=size1;f++)
		{
			p[f]=p[f+size2];
	}   }
}
main()
{
	char *p,*q;
	int size1,size2,i;
	p=(char*)malloc(sizeof(char)*50);
	printf("Enter a string :  ");
	gets(p);
	size1=strlen(p);
	q=(char*)malloc(sizeof(char)*30);
	printf("Enter a pattern :  ");
	gets(q);
	size2=strlen(q);
	for(i=0;i<size1;i++)
	{
		if(p[i]==q[0])
		{
			func(p,size1,i,q,size2);
		}
	}
	puts(p);
}
