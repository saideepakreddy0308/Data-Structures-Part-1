#include<stdio.h>
#include<stdlib.h>
struct employees
{
    int id;
	char name[20];
	char city[20];
}e[100],temp;  
void display(struct employees e[],int n);
void search(struct employees e[],int n);
void sorting(struct employees e[],int n);
void add(struct employees e[],int n);
int main()
{
	int i,n;
	printf("enter the number of employees: ....\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the details of the employee: %d \n",i+1);
		printf("enter the id of employee: ... \n");
		scanf("%d",&e[i].id);
		printf("enter the name of employee: ...\n");
		scanf("%s",&e[i].name);
		printf("enter the city of employee: ...\n");
		scanf("%s",&e[i].city);
	}
	display(e,n);
	search(e,n);
	sorting(e,n);
	add(e,n);
	return 0;
}
	void display(struct employees e[],int n)
	{
	int i;
	printf("...........................employee details of the company as follows........................................\n");
	for(i=0;i<n;i++)
	{
	printf("employee %d id=%d\n",i,&e[i].id);	
 printf("employee %d name=%d\n",i,&e[i].id);
 printf("employee %d city=%d\n",i,&e[i].id);
 
	}
	}
void search(struct employees e[],int n)
{
printf("----------------searching on the Base of employee of ID-------------------- \n");	
int required_id,i;
printf("enter the id of the employee required: ...\n");
scanf("%d",&required_id);
for(i=0;i<n;++i)
{
	if(required_id==e[i].id)
	{
	printf("Id \t: ");
	printf("%d \n",e[i].id);	
	printf("Name \t: ");
	printf("%s \n",e[i].name);
	printf("city \t: ");
	printf("%s \n",e[i].city);
	printf(" \n");	
	}
}
}
void sorting(struct employees e[],int n)
{
printf("-------------sorting details on the base of employee ID--------------------  \n");
int i,j;
//for(i=0;i<n;i++)
//{
	for(int j=0;j<n-1;j++)
	{
		if(e[j].id>e[j+1].id)
		{
			 temp=e[j+1];
			e[j+1]=e[j];
			e[j]=temp;
		}
	}
for(i=0;i<n;i++)
	{
	printf("Id \t: ");
	printf("%d \n",e[i].id);	
	printf("Name \t: ");
	printf("%s \n",e[i].name);
	printf("city \t: ");
	printf("%s \n",e[i].city);
	printf(" \n");
	}
}
void add(struct employees e[],int n)
{
printf("----------enter the number of elements to be added ---------- ");
int k,i;
scanf("%d",&k);
n=n+k;
printf("enter the details of the employee to be added: ");
	for(i=n-k;i<n;i++)
	{
		printf("enter the details of the employee: %d \n",i+1);
		printf("enter the id of employee: ... \n");
		scanf("%d",&e[i].id);
		printf("enter the name of employee: ...\n");
		scanf("%s",&e[i].name);
		printf("enter the city of employee: ...\n");
		scanf("%s",&e[i].city);
	}
	printf("...........................employee details of the company as follows after new employees..........................\n");
	for(i=0;i<n;i++)
	{
	printf("Id \t: ");
	printf("%d \n",e[i].id);	
	printf("Name \t: ");
	printf("%s \n",e[i].name);
	printf("city \t: ");
	printf("%s \n",e[i].city);
	printf(" \n");
	}
}
