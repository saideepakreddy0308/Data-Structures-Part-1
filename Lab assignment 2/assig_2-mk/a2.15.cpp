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
		temp1->link=head;
		temp->link=temp1;
		temp=temp->link;
	}
	printf("\nhead=%u",head);
	temp=head;
	printf("\ndata\tlink");
	for(i=1;i<=n;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	temp=head;
	x=1;
	while(temp->link!=head)
	{
		x=x+1;
		temp=temp->link;
	}
	printf("\ncircular linked list has %d nodes",x);
	free(temp);
	free(temp1);
	getch ();
	return 0;
}
