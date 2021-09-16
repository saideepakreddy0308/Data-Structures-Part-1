#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *temp1=NULL;
void create(struct node *temp,int n);
void print(struct node *temp);
void printrev(struct node *temp);
void common(struct node *temp1,struct node *temp2);
void common(struct node *temp1,struct node *temp2)
{
	if(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->data==temp2->data)
		{
			printf("%d",temp1->data);
			common(temp1->link,temp2->link);
		}
		else if(temp1->data > temp2->data)
		{
			common(temp1,temp2->link);
		}
		else if(temp1->data < temp2->data)
		{
			common(temp1->link,temp2);
		}
	}
}
void print(struct node *temp)
{
	if(temp!=NULL)
	{
		printf("Data : %d\n",temp->data);
		print(temp->link);
	}
}
void printrev(struct node *temp)
{
	if(temp!=NULL)
	{
		printrev(temp->link);
		printf("Data : %d\n",temp->data);
	}
}
void create(struct node *temp,int n)
{
	if(n>0)
	{
		temp->link=(struct node*)malloc(sizeof(struct node));
		printf("Enter Data :  ");
		scanf("%d",&temp->link->data);
		temp->link->link=NULL;
		temp=temp->link;
		create(temp,n-1);
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
	printf("Enter Data of the 1st node :  \n");
	printf("Enter Data :  ");
	scanf("%d",&head->data);
	head->link=NULL;
	create(temp,n-1);
	struct node *head1,*temp2;
	head1=(struct node *)malloc(sizeof(struct node));
	printf("Enter Data of the 2nd node :  \n");
	printf("Enter Data :  ");
	scanf("%d",&head1->data);
	head1->link=NULL;
	temp2=head1;
	create(temp2,n-1);
	printf("Data as entered :  \n");
	print(temp1);
	printf("Reversed order :  \n");
	printrev(temp1);
	printf("Data as entered :  \n");
	print(temp2);
	printf("Reversed order :  \n");
	printrev(temp2);
	temp1=head;
	temp2=head1;
	printf("Common elements in the two linked lists are :  \n");
	common(temp1,temp2);
}
