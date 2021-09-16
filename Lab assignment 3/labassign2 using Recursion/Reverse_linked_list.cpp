#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *temp1=NULL;
struct node * create(struct node *temp,int n);
void print(struct node *temp);
void printrev(struct node *temp);
void reverse(struct node *prev,struct node *curr);
void reverse(struct node *prev,struct node *curr)
{
	if(curr!=NULL)
	{
		reverse(curr,curr->link);
		curr->link=prev;
	}
	else
	{
		temp1=prev;
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
struct node * create(struct node *temp,int n)
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
	printf("Enter Data :  ");
	scanf("%d",&head->data);
	head->link=NULL;
	create(temp,n-1);
	printf("Data as entered :  \n");
	print(temp1);
	printf("Reversed order :  \n");
	printrev(temp1);
	temp=head;
	reverse(NULL,temp);
	printf("After Reversing the Data in the linked list :  \n");
	printf("Data as entered :  \n");
	print(temp1);
	printf("Reversed order :  \n");
	printrev(temp1);
}
