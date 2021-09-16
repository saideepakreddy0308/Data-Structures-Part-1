#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *temp1=NULL;
void create(struct node *temp,int n);
void print(struct node *temp);
void printrev(struct node *temp);
struct node * deletenode(struct node *temp,int n,struct node *temp3);
struct node * deletenode(struct node *temp,int n,struct node *temp3)
{
	struct node *temp2,*p;
	if(temp->data!=n)
	{
		deletenode(temp->link,n,temp3);
	}
	else if(temp->data==n)
	{
		p=temp;
		temp2=p->link;
		p->data=temp2->data;
		p->link=temp2->link;
		temp2=NULL;
		free(temp2);
		print(temp3);
		temp3=NULL;
		free(temp3);	
	}
}
void print(struct node *temp)
{
	if(temp!=NULL)
	{
		printf("Data : %d\n",temp->data);
		print(temp->link);
	}
}
void printrev(struct node *temp)
{
	if(temp!=NULL)
	{
		printrev(temp->link);
		printf("Data : %d\n",temp->data);
	}
}
void create(struct node *temp,int n)
{
	if(n>0)
	{
		temp->link=(struct node*)malloc(sizeof(struct node));
		printf("Enter Data :  ");
		scanf("%d",&temp->link->data);
		temp->link->link=NULL;
		temp=temp->link;
		create(temp,n-1);
	}
}
int main()
{
	int n;
	printf("Enter no of nodes :  ");
	scanf("%d",&n);
	struct node *head,*temp;
	head=(struct node*)malloc(sizeof(struct node));
	temp=head;
	temp1=head;
	printf("Enter Data :  ");
	scanf("%d",&head->data);
	head->link=NULL;
	create(temp,n-1);
	printf("Data as entered :  \n");
	print(temp1);
	printf("Reversed order :  \n");
	printrev(temp1);
	temp1=head;
	int z;
	printf("Enter the data of the node  to be pointed :  ");
	scanf("%d",&z);
	deletenode(temp1,z,temp1);
}
