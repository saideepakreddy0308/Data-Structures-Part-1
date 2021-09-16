#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
void swap(int* x,int* y);
struct node* root=NULL;
main()
{
	int i,n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter the nodes data: \n");
    struct node* temp;
	for(i=0;i<n;i++)
	{
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node* p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
    }
    temp=root;
    while(temp!=NULL&& temp->link!=NULL)
    {
		swap(&temp->data,&temp->link->data);
        temp=temp->link->link;
	}
    printf("pairwise reversed linked list...\n");
    temp=root;
    if(temp==NULL)
    {
    	printf("list is empty.... \n");
	}
	else
	{
	while(temp!=NULL)
	{
		printf("%d-",temp->data);
		temp=temp->link;
	}
	printf("\n\n");	
	}
}
void swap(int* x,int* y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
