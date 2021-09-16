#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int main ()
{
	int n,i,x;
	struct node *head,*temp,*temp1;
	printf("enter n:");
	scanf("%d",&n);
	head=(struct node*)malloc(sizeof (struct node));
	printf("enter the data :");
	scanf("%d",&x);
	head->data=x;
	head->link=NULL;
	temp=head;
	for(i=2;i<=n;i++)
	{
		temp1=(struct node*)malloc(sizeof (struct node));
		printf("enter the data :");
		scanf("%d",&temp1->data);
		temp1->link=NULL;
		temp->link=temp1;
		temp=temp->link;
	}
	temp=head;
	printf("\ndata\tlink");
	for(i=1;i<=n;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	printf("enter data to be deleted :");
	scanf("%d",&x);
	temp=head;
	while(temp->data!=x)
	{
		temp=temp->link;
	}
	while(temp->link->link!=NULL)
	{
		temp->data=temp->link->data;
		temp=temp->link;
	}
	temp1=temp->link;
	temp->link=NULL;
	temp->data=temp1->data;
	free(temp1);
	printf("\ndeleted linked list");
	temp=head;
	printf("\ndata\tlink");
	while(temp!=NULL)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	free(temp1);
	free(temp);
	getch ();
	return 0;
}
