#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *fwd,*back;
};
int main()
{
	int n,i,a;
	struct node *head,*temp1,*temp2,*temp;
	printf("enter n:");
	scanf("%d",&n);
	head=(struct node*)malloc(sizeof (struct node));
	printf("enter the data :");
	scanf("%d",&head->data);
	head->back=NULL;
	head->fwd=NULL;
	temp1=head;
	for(i=2;i<=n;i++)
	{
		printf("enter the data :");
		temp=(struct node*)malloc(sizeof (struct node));
		scanf("%d",&temp->data);
		temp->back=temp1;
		temp->fwd=NULL;
		temp1->fwd=temp;
		temp1=temp1->fwd;
	}
	temp=head;
	printf("back\tdata\tfwd");
	for(i=1;i<=n;i++)
	{
		printf("\n%u\t%d\t%u\n",temp->back,temp->data,temp->fwd);
		temp=temp->fwd;
	}
	printf("adding at beginning");
	temp2=(struct node*)malloc(sizeof (struct node));
	temp2->back=NULL;
	temp2->fwd=NULL;
	printf("\nenter the value of data to be added at beginning :");
	scanf("%d",&temp2->data);
	temp2->fwd=head;
	head->back=temp2;
	head=temp2;
	temp=head;
	printf("back\tdata\tfwd");
	while(temp!=NULL)
	{
		printf("\n%u\t%d\t%u\n",temp->back,temp->data,temp->fwd);
		temp=temp->fwd;
	}
	printf("adding at end");
	temp2=(struct node*)malloc(sizeof (struct node));
	temp2->back=NULL;
	temp2->fwd=NULL;
	printf("\nenter the value of data to be added at end :");
	scanf("%d",&temp2->data);
	temp=head;
	while(temp->fwd!=NULL)
	{
		temp=temp->fwd;
	}
	temp2->back=temp;
	temp->fwd=temp2;
	printf("back\tdata\tfwd");
	temp=head;
	while(temp!=NULL)
	{
		printf("\n%u\t%d\t%u\n",temp->back,temp->data,temp->fwd);
		temp=temp->fwd;
	}
	printf("adding in middle");
	temp2=(struct node*)malloc(sizeof (struct node));
	temp2->back=NULL;
	temp2->fwd=NULL;
	printf("\nenter the value of data to be added at middle :");
	scanf("%d",&temp2->data);
	printf("\n enter the value of data at which new should be added :");
	scanf("%d",&a);
	temp=head;
	while(temp->data!=a)
	{
		temp=temp->fwd;
	}
	temp2->back=temp;
	temp2->fwd=temp->fwd;
	temp->fwd->back=temp2;
	temp->fwd=temp2;
	temp=head;
	printf("back\tdata\tfwd");
	while(temp!=NULL)
	{
		printf("\n%u\t%d\t%u\n",temp->back,temp->data,temp->fwd);
		temp=temp->fwd;
	}
	free(temp);
	free(temp1);
	free(temp2);
	getch ();
	return 0;
}
