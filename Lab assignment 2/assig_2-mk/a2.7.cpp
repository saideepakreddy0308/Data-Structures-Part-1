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
	int n,i,j,x,a,b,c;
	struct node *head1,*head2,*temp,*temp1,*temp2,*p,*q,*r,*temp3;
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
	while(temp->link!=0)
	{
		temp=temp->link;
	}
	temp->link=head2;
	temp=head1;
	printf("\ndata\tlink");
	while(temp!=NULL)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	p=(struct node*)malloc(sizeof (struct node));
	p->link=NULL;
	p->data=1000;
	q=(struct node*)malloc(sizeof (struct node));
	q->link=NULL;
	q->data=1001;
	r=(struct node*)malloc(sizeof (struct node));
	r->link=NULL;
	r->data=1002;
	q->link=r;
	p->link=q;
	temp1=head1;
	while(temp1->link!=NULL)
	{
		temp1=temp1->link;
	}
	temp1->link=p;
	for(i=0;i<2*n;i++)
	{
		temp=head1;
		for(j=0;j<2*n;j++)
		{
			temp1=temp->link;
			if(temp1->data > temp1->link->data)
			{
				temp2=temp1->link;
				temp3=temp2->link;
				temp2->link=temp1;
				temp->link=temp2;
				temp1->link=temp3;	
			}
			if(temp1->data < temp1->link->data)
			{
				temp=temp->link;	
			}
		}
	}
	temp=head1;
	while(temp->link!=p)
	{
		temp=temp->link;
	}
	temp->link=NULL;
	printf("\n\n\nsorted linked list");
	temp=head1;
	printf("\ndata\tlink");
	while(temp!=NULL)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	
	temp1=head1;
	while(temp1->link!=NULL)
	{
		p=temp1;
		temp=p->link;
		if(p->data==p->link->data)
		{
			if(temp->link!=NULL)
			{
				p->link=temp->link;
				free(temp);
			}
			else
			{
				p->link=temp;
				free(temp);
			}
		}
		temp1=temp1->link;
	}
	printf("duplicate nodes deleted linked list");
	temp=head1;
	while(temp->link->link!=NULL)
	{
		temp=temp->link;
	}
	if(temp->data==temp->link->data)
	{
		temp1=temp->link;
		temp->link=NULL;
	}
	temp=head1;
	printf("\ndata\tlink");
	for(i=0;i<2*n;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	free(temp);
	free(temp1);
	free(temp2);
	free(p);
	free(q);
	free(r);
	free(temp3);
	
	getch ();
	return 0;
}
