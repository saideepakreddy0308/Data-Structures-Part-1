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
	struct node *head,*temp,*temp1,*p,*curr,*prev,*next;
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
	printf("\n changed linked list");
	curr=head->link;
	prev=head;
	head=head->link;
	while(curr!=NULL&&curr->link!=NULL)
	{
		next=curr->link;
		prev->link=next->link;
		curr->link=prev;
		prev=next;
		curr=prev->link;		
	}
	prev->link=NULL;
	temp=head;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=prev;
	temp=head;
	printf("\ndata\tlink");
	for(i=1;i<=n;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	free(p);
	free(temp);
	free(temp1);
	free(curr);
	free(prev);
	free(next);
	getch ();
	return 0;
}
