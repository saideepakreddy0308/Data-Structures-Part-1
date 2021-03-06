#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int count=1;
struct node *temp1=NULL;
void create(struct node *temp,int n,struct node *temp1);
struct node * print(struct node *temp,struct node *temp1);
void printrev(struct node *temp,struct node *temp1);
void countnodes(struct node *temp,struct node *temp1);
void countnodes(struct node *temp,struct node *temp1)
{
	if(temp->link!=temp1)
	{
		count++;
		temp=temp->link;
		countnodes(temp,temp1);
	}
	else if(temp->link==temp1)
	{
		printf("No of nodes in the circular list are : %d",count);
	}
}
struct node * print(struct node *temp,struct node *temp1)
{
	if(temp->link!=temp1)
	{
		printf("Data : %d\n",temp->data);
		print(temp->link,temp1);
	}
	else if(temp->link==temp1)
	{
		printf("Data : %d\n",temp->data);
	}
}
void printrev(struct node *temp,struct node *temp1)
{
	if(temp->link!=temp1)
	{
		printrev(temp->link,temp1);
		printf("Data : %d\n",temp->data);
	}
	else if(temp->link==temp1)
	{
		printf("Data : %d\n",temp->data);
	}
}
void create(struct node *temp,int n,struct node *temp1)
{
	if(n>0)
	{
		temp->link=(struct node*)malloc(sizeof(struct node));
		printf("Enter Data :  ");
		scanf("%d",&temp->link->data);
		if(n==1)
		{
			temp->link->link=temp1;
		}
		else
		{
			temp->link->link=NULL;
		}
		temp=temp->link;
		create(temp,n-1,temp1);
	}
}
int main()
{
	int n;
	printf("Enter no of nodes :  ");
	scanf("%d",&n);
	struct node *head,*temp;
	head=(struct node*)malloc(sizeof(struct node));
	temp=head;
	temp1=head;
	printf("Enter Data :  ");
	scanf("%d",&head->data);
	head->link=NULL;
	create(temp,n-1,temp1);
	printf("Data as entered :  \n");
	//printf("%d",);
	print(temp1,temp1);
	printf("Reversed order :  \n");
	printrev(temp1,temp1);
	temp1=head;
	countnodes(temp1,temp1);
}
