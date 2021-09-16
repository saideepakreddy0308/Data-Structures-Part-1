#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void insert(int y,int z,struct node *temp);
void insert(int y,int z,struct node *temp)
{
	int i;
	struct node *temp1;
	temp1=(struct node*)malloc(sizeof (struct node));
	temp1->data=z;
	temp1->link=NULL;
		while(temp->link->data!=y)
		{
			temp=temp->link;
		}
	temp1->link=temp->link;
	temp->link=temp1;	
}
int main()
{
	int n,i,x,y,z;
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
	printf("data\tlink");
	for(i=1;i<=n;i++)
	{
		printf("\n%d\t%u\n",temp->data,temp->link);
		temp=temp->link;
	}
	printf("\nadding at first");
		temp=head;
		head=(struct node*)malloc(sizeof (struct node));
		printf("\nenter the data to add first:");
		scanf("%d",&head->data);
		head->link=temp;
		p=head;
		printf("\ndata\tlink");
		for(i=1;i<=n+1;i++)
		{
			printf("\n%d\t%u\n",p->data,p->link);
			p=p->link;
		}
	printf("\nadding at last");
		temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp1=(struct node*)malloc(sizeof (struct node));
		printf("\nenter the data to be added at end :");
		scanf("%d",&temp1->data);
		temp1->link=NULL;
		temp->link=temp1;
		p=head;
		printf("\ndata\tlink");
		for(i=1;i<=n+2;i++)
		{
			printf("\n%d\t%u\n",p->data,p->link);
			p=p->link;
		}
	printf("\nadding at middle");
		printf("\nenter the data of node before which new node should be added :");
		scanf("%d",&y);
		printf("\nenter the data to be added at middle :");
		scanf("%d",&z);
		insert(y,z,head);
		p=head;
		printf("\ndata\tlink");
		for(i=1;i<=n+3;i++)
		{
			printf("\n%d\t%u\n",p->data,p->link);
			p=p->link;
		}
		free(temp);
		free(p);
		free(temp1);
	return 0;
}
