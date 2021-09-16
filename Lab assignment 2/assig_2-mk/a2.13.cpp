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
	printf("deleting middle node");
	printf("\nenter the value data to be deleted :");
	scanf("%d",&a);
	temp=head;
	while(temp->fwd->data!=a)
	{
		temp=temp->fwd;
	}
	temp2=temp->fwd;
	temp->fwd=temp->fwd->fwd;
	temp->fwd->back=temp;
	free(temp2);
	
	temp=head;
	printf("\nback\tdata\tfwd");
	while(temp!=NULL)
	{
		printf("\n%u\t%d\t%u\n",temp->back,temp->data,temp->fwd);
		temp=temp->fwd;
	}
	printf("deleting first node ");
	temp2=head;
	head=head->fwd;
	free(temp2);
	head->back=NULL;
	
	temp=head;
	printf("\nback\tdata\tfwd");
	while(temp!=NULL)
	{
		printf("\n%u\t%d\t%u\n",temp->back,temp->data,temp->fwd);
		temp=temp->fwd;
	}
	printf("deleating at end");
	temp=head;
	while(temp->fwd->fwd!=NULL)
	{
		temp=temp->fwd;
	}
	temp2=temp->fwd;
	temp->fwd=NULL;
	free(temp2);
	
	temp=head;
	printf("\nback\tdata\tfwd");
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
