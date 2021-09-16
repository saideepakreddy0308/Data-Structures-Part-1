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
	int n,i,x,y,j;
	struct node *head,*temp,*temp1,*temp2;
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
	printf("enter node data to which the last node to be linked :");
	scanf("%d",&x);
	y=0;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==x)
		{
			y=y+1;
		}
		temp=temp->link;
	}
	if(y>0)
	{
		temp=head;
		while(temp->link->data!=x)
		{
			temp=temp->link;
		}
		temp1=head;
		while(temp1->link!=NULL)
		{
			temp1=temp1->link;
		}
		temp1->link=temp->link;
	}
	temp=head;
	printf("\ndata\tlink");
	for(i=1;i<=n+1;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	temp=head;	
	for(i=0;i<n;i++)
	{
		temp=temp->link;
	}
	printf("\nnode linked to last node is:\nnode addrese=%u\tnode data=%d\tnode link addrese=%u\n",temp,temp->data,temp->link);
	free(temp);
	free(temp1);
	free(temp2);
	getch ();
	return 0;
}
