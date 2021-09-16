#include<stdio.h>
#include<stdlib.h>
struct books
{
	char title[20];
	char author[20];
	int pages;
	float price;
	int soldcopies;
}b[100];  
void display(struct books b[],int n);
void maxnum(struct books b[],int n);
void mincost(struct books b[],int n);
void moneyearn(struct books b[],int n);
int main()
{
	int i,n,total=0;
	printf("enter the number of books: ....\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the details of the book: %d \n",i+1);
		printf("enter the title of the book: ... \n");
		scanf("%s",&b[i].title);
		printf("enter the author of the book: ...\n");
		scanf("%s",&b[i].author);
		printf("enter the pages of the book: ...\n");
		scanf("%d",&b[i].pages);
		printf("enter the price of the book: ...\n");
		scanf("%f",&b[i].price);
		printf("enter the sold_copies of the book: ...\n");
		scanf("%d",&b[i].soldcopies);
	}
	display(b,n);
	maxnum(b,n);
	mincost(b,n);
	moneyearn(b,n);
	return 0;
}
 void display(struct books b[],int n)
 {
	printf("...........................BOOKS DETAILS AS FOLLOWS........................................\n");
	int total=0;
	for(int i=0;i<n;i++)
	{
	 total=total+b[i].soldcopies;	
	printf("TITLE    \t: ");
	printf("%s \n",b[i].title);	
	printf("AUTHOR    \t: ");
	printf("%s \n",b[i].author);
	printf("PAGES    \t: ");
	printf("%d \n",b[i].pages);
	printf("PRICE    \t: ");
	printf("%f \n",b[i].price);
	printf("SOLD    \t: ");
	printf("%d \n",b[i].soldcopies);
	printf(" \n");
	}
	printf("TOTAL SOLD COPIES:%d  \n",total);
}
void maxnum(struct books b[],int n)
{
printf("----------------------BOOK WIHT THE MAXIMUM NUMBER OF PAGES----------------------------- \n");
int max=b[0].pages;
for(int i=0;i<n;i++)
{
	if(max<b[i].pages)
	{
		max=b[i].pages;
	}
}
printf("BOOK WITH MAXIMUM PAGES:  \t \n");
for(int i=0;i<n;i++)
{
if(max==b[i].pages)
{
	printf("TITLE    \t: ");
	printf("%s \n",b[i].title);	
	printf("AUTHOR    \t: ");
	printf("%s \n",b[i].author);
	printf("PAGES    \t: ");
	printf("%d \n",b[i].pages);
	printf("PRICE    \t: ");
	printf("%f \n",b[i].price);
	printf("SOLD    \t: ");
	printf("%d \n",b[i].soldcopies);
	printf(" \n");	
}
}
}

void mincost(struct books b[],int n){
printf("----------------------BOOK WITH THE MINIMUM COST----------------------------- \n");
float min=b[0].price;
for(int i=0;i<n;i++)
{
	if(min>b[i].price)
	{
		min=b[i].price;
	}
}
printf("BOOK WIHT MINIMUM COST:  \t \n");
for(int i=0;i<n;i++)
{
if(min==b[i].price)
{
	printf("TITLE    \t: ");
	printf("%s \n",b[i].title);	
	printf("AUTHOR    \t: ");
	printf("%s \n",b[i].author);
	printf("PAGES    \t: ");
	printf("%d \n",b[i].pages);
	printf("PRICE    \t: ");
	printf("%f \n",b[i].price);
	printf("SOLD    \t: ");
	printf("%d \n",b[i].soldcopies);
	printf(" \n");	
}
}
}
void moneyearn(struct books b[],int n)
{
printf("------------------INFORMATION OF TOTAL AMOUNT OF MONEY EARNED BY SELLING BOOKS------------------\n");
float money_earned=0;
for(int i=0;i<n;i++)
{
	money_earned+=b[i].price*b[i].soldcopies;
}
printf("%f",money_earned);
}




