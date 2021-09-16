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
	int n,i,x,j;
	struct node *head,*temp,*temp1,*temp2,*temp3,*p,*q,*r;
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
	p=(struct node*)malloc(sizeof (struct node));
	p->link=NULL;
	p->data=1001;
	q=(struct node*)malloc(sizeof (struct node));
	q->link=NULL;
	q->data=1003;
	r=(struct node*)malloc(sizeof (struct node));
	r->link=NULL;
	r->data=1005;
	q->link=r;
	p->link=q;
	temp1=head;
	while(temp1->link!=NULL)
	{
		temp1=temp1->link;
	}
	temp1->link=p;
	temp=head;
	for(i=0;i<=n;i++)
	{
		temp=head;
		for(j=0;j<=n;j++)
		{
			temp1=temp->link;
			if(temp1->data%2!=0&&temp1->link->data%2==0)
			{
				temp2=temp1->link;
				temp3=temp2->link;
				temp2->link=temp1;
				temp->link=temp2;
				temp1->link=temp3;
			}
			else
			{
				temp=temp->link;
			}
		}
	}
	if(head->data%2!=0)
	{
		temp=head;
		head=head->link;
		temp->link=NULL;
		temp1=head;
		while(temp1->link->data%2==0)
		{
			temp1=temp1->link;
		}
		temp2=temp1->link;
		temp->link=temp2;
		temp1->link=temp;
	}
	temp=head;
	while(temp->link!=p)
	{
		temp=temp->link;
	}
	temp->link=NULL;
	printf("arranged linked list");
	temp=head;
	printf("\ndata\tlink");
	for(i=1;i<=n;i++)
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
