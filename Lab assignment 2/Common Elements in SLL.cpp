#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;
struct node* root1=NULL;
main()
{
	int i,n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter the nodes data: \n");
	for(i=0;i<n;i++)
	{
	struct node* temp;
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
    printf("linked list1\n");
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
    	printf("list is empty.... \n");
	}
	else
	{
	while(temp!=NULL)
	{
		printf("%d  \n",temp->data);
		temp=temp->link;
	}
	printf("\n\n");	
	}
	printf("enter the nodes data of linked list 2: \n");
	for(i=0;i<n;i++)
	{
	struct node* temp1;
	temp1=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp1->data);
	temp1->link=NULL;
	if(root1==NULL)
	{
		root1=temp1;
	}
	else
	{
		struct node* p1;
		p1=root1;
		while(p1->link!=NULL)
		{
			p1=p1->link;
		}
		p1->link=temp1;
	}
    }
    printf("linked list2\n");
    struct node* temp1;
    temp1=root1;
    if(temp1==NULL)
    {
    	printf("list is empty.... \n");
	}
	else
	{
	while(temp1!=NULL)
	{
		printf("%d  \n",temp1->data);
		temp1=temp1->link;
	}
	printf("\n\n");	
	}
	printf("-------------common elements list-----------------\n");
	temp=root;
	while(temp!=NULL)
	{
		temp1=root1;
		while(temp1!=NULL)
		{
			if(temp->data==temp1->data)
			{
				printf("%d  \n",temp->data);
			}	
			temp1=temp1->link;
		}
		temp=temp->link;
	}
}
