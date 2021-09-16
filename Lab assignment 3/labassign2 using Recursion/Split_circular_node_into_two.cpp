#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *temp1=NULL;
int i=1;
void split_circular_node(struct node *temp,struct node *temp1,int n);
void create(struct node *temp,int n,struct node *temp1);
struct node * print(struct node *temp,struct node *temp1);
void printrev(struct node *temp,struct node *temp1);
void split_circular_node(struct node *temp,struct node *temp1,int n)
{
	if(i<n)
	{
		i++;
		split_circular_node(temp->link,temp1,n);
	}
	else if(i==n)
	{
		struct node *temp2,*head1;
		head1=temp->link;
		temp->link=temp1;
		temp2=head1;
		temp=temp2;
		while(temp->link!=temp1)
		{
			temp=temp->link;
		}
		temp->link=temp2;
		printf("Data of the 1st circular node :  \n");
		print(temp1,temp1);
		printf("Data of the 1st circular node in reverse :  \n");
		printrev(temp1,temp1);
		printf("Data of the 2nd circular node :  \n");
		print(temp2,temp2);
		printf("Data of the 2nd circular node in reverse :  \n");
		printrev(temp2,temp2);
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
	print(temp1,temp1);
	printf("Reversed order :  \n");
	printrev(temp1,temp1);
	int z;
	if(n%2==0)
	{
		z=n/2;
	}
	else if(n%2!=0)
	{
		z=n/2+1;
	}
	temp=head;
	split_circular_node(temp,temp,z);
}
