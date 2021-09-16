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
	int n,i,x,y;
	struct node *head,*temp,*temp1,*p;
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
	printf("\ndeleting in middle");
	printf("\nenter the data of node to be deleted");
	scanf("%d",&y);
	temp=head;
	while(temp->data!=y)
	{
		p=temp;
		temp=temp->link;	
	}
	if(temp->data==y)
	{
		p->link=temp->link;
		temp->link=NULL;
	}
	free(temp);
	temp=head;
	printf("\ndata\tlink");
	for(i=1;i<=n-1;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	printf("\ndeleting first node");
	p=head;
	head=head->link;
	temp=head;
	printf("\ndata\tlink");
	for(i=1;i<=n-2;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	printf("deleting last node");
	temp=head;
	p=head;
	while(temp->link!=NULL)
	{
		p=temp;
		temp=temp->link;
	}
	if(temp->link==NULL)
	{
		p->link=NULL;
	}
	free(temp);
	temp=head;
	printf("\ndata\tlink");
	for(i=1;i<=n-3;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	free(p);
	free(temp);
	free(temp1);
	getch ();
	return 0;
}
