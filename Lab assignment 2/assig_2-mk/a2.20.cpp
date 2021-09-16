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
	struct node *head,*temp,*temp1,*head1;
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
	if(n%2==0)
	{
		y=n/2;
	}
	else
	{
		y=n/2+1;
	}
	temp=head;
	for(i=1;i<y;i++)
	{
		temp=temp->link;
	}
	head1=temp->link;
	temp->link=head;
	temp1=head1;
	while(temp1->link!=head)
	{
		temp1=temp1->link;
	}
	temp1->link=head1;
	printf("\nhead1=%u\t\t\thead2=%u",head,head1);
	temp=head;
	temp1=head1;
	printf("\n1)data\t1)link\t\t\t2)data\t2)link");
	for(i=1;i<=y;i++)
	{
		printf("\n%d\t%u\t\t\t%d\t%u\n",temp->data,temp->link,temp1->data,temp1->link);
		temp=temp->link;
		temp1=temp1->link;
	}
	free(temp);
	free(temp1);
	getch ();
	return 0;
}
