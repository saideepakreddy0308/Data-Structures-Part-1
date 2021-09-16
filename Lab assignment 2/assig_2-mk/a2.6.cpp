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
	struct node *head1,*head2,*temp,*temp1,*temp2;
	printf("enter n:");
	scanf("%d",&n);
	head1=(struct node*)malloc(sizeof (struct node));
	printf("\nenter the values for first linked list");
	printf("\nenter the data :");
	scanf("%d",&x);
	head1->data=x;
	head1->link=NULL;
	temp=head1;
	for(i=2;i<=n;i++)
	{
		temp1=(struct node*)malloc(sizeof (struct node));
		printf("enter the data :");
		scanf("%d",&temp1->data);
		temp1->link=NULL;
		temp->link=temp1;
		temp=temp->link;
	}
	printf("\nenter the values for second linked list");
	head2=(struct node*)malloc(sizeof (struct node));
	printf("\nenter the data :");
	scanf("%d",&x);
	head2->data=x;
	head2->link=NULL;
	temp=head2;
	for(i=2;i<=n;i++)
	{
		temp1=(struct node*)malloc(sizeof (struct node));
		printf("enter the data :");
		scanf("%d",&temp1->data);
		temp1->link=NULL;
		temp->link=temp1;
		temp=temp->link;
	}
	printf("first linked list");
	temp=head1;
	printf("\ndata\tlink");
	for(i=1;i<=n;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	printf("second linked list");
	temp=head2;
	printf("\ndata\tlink");
	for(i=1;i<=n;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	temp=head1;
	while(temp->link!=NULL)
	{
		if(temp->data==temp->link->data)
		{
			printf("\n%d is repeated in first linked list",temp->data);
			temp->link=temp->link->link;
			temp=temp->link;
		}
		else
		{
			temp=temp->link;	
		}
	}
	temp=head2;
	while(temp->link!=NULL)
	{
		if(temp->data==temp->link->data)
		{
			printf("\n%d is repeated in second linked list",temp->data);
			temp->link=temp->link->link;
			temp=temp->link;
		}
		else
		{
			temp=temp->link;	
		}
	}
	temp1=head1;
	while(temp1->link!=NULL)
	{
		temp2=head2;
		while(temp2->link!=NULL)
		{
			if(temp1->data==temp2->data)
			{
				printf("\n%d is common to both linked list",temp1->data);
			}
			temp2=temp2->link;
		}
		temp1=temp1->link;
	}
	temp2=head2;
	while(temp2->link!=NULL)
	{
		if(temp1->data==temp2->data)
		{
			printf("\n%d is common to both linked list",temp1->data);
		}
		temp2=temp2->link;
	}
	free(temp);
	free(temp1);
	free(temp2);

	getch ();
	return 0;
}
