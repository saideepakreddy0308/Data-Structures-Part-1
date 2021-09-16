#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *fwd;
	struct node *bkd;
};
void reverse(struct node *temp);
void create(struct node *temp,int n);
void print(struct node *temp);
void printrev(struct node *temp);
struct node * deletenode(struct node *temp);
struct node * deletenode(struct node *temp)
{
	struct node *temp1,*temp2;
	temp1=temp->fwd;
	temp2=temp1;
	temp1->bkd=NULL;
	printf("Data as entered :  \n");
	print(temp2);
	temp1=temp;
	printf("Reversed order :  \n");
	reverse(temp2);
	temp1=NULL;
	temp2=NULL;
	free(temp2);
	free(temp);
	free(temp1);
}
void reverse(struct node *temp)
{
	struct node *temp1;
	temp1=temp;
	while(temp1->fwd!=NULL)
	{
		temp1=temp1->fwd;
	}
	printrev(temp1);
	temp=NULL;
	free(temp);
}
void print(struct node *temp)
{
	if(temp!=NULL)
	{
		printf("Data : %d\n",temp->data);
		print(temp->fwd);
	}
	temp=NULL;
	free(temp);
}
void printrev(struct node *temp)
{
	if(temp!=NULL)
	{
		printf("Data : %d\n",temp->data);
		printrev(temp->bkd);
	}
	temp=NULL;
	free(temp);
}
void create(struct node *temp,int n,struct node *temp1)
{
	if(n>0)
	{
		temp->fwd=(struct node*)malloc(sizeof(struct node));
		temp=temp->fwd;
		printf("Enter Data :  ");
		scanf("%d",&temp->data);
		temp->fwd=NULL;
		temp->bkd=temp1;
		create(temp,n-1,temp1->fwd);
	}
	temp=NULL;
	free(temp);
	temp1=NULL;
	free(temp1);
}
int main()
{
	int n;
	printf("Enter no of nodes :  ");
	scanf("%d",&n);
	struct node *head;
	struct node *temp;
	struct node *temp1;
	head=(struct node * )malloc(sizeof(struct node));
	temp=head;
	temp1=head;
	printf("Enter Data :  ");
	scanf("%d",&head->data);
	head->fwd=NULL;
	head->bkd=NULL;
	create(temp,n-1,temp1);
	printf("Data as entered :  \n");
	print(temp1);
	temp=head;
	printf("Reversed order :  \n");
	temp=head;
	reverse(temp);
	temp=head;
	deletenode(temp);
	temp1=NULL;
	temp=NULL;
	free(temp);
	free(temp1);
}
