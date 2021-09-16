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
	struct node *head,*temp,*temp1,*p,*z;
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
	temp=head;
	printf("enter the  n :");
	scanf("%d",&y);
	for(i=1;i<=n-y;i++)
	{
		
		temp = temp->link;
	}
	printf("%d node = data :%d and link :%u",y,temp->data,temp->link);
	free(p);
	free(temp);
	free(temp1);
	free(z);
	getch ();
	return 0;
}
