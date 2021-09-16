#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
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
    if(temp==NULL)
    {
    	printf("list is empty \n");
	}
	else
	{
		temp=root;
		struct node *p,*q;
		struct node *e=NULL,*o=NULL,*ad;
		while(temp!=NULL)
		{
			ad=(struct node*)malloc(sizeof(struct node));
			ad->data=temp->data;
			ad->link=NULL;
		 	if(temp->data % 2 == 0)
		 	{
		 		if(e==NULL)
		 		{
		 			e=ad;
				 }
				 else
				 {
				 	p->link=ad;
				 }
				 p=ad;
			 }
			 else
			 {
			 	if(o==NULL)
			 	{
			 		o=ad;
				 }
				 else
				 {
				 	q->link=ad;
				 }
				 q=ad;
			 }
			 temp=temp->link;
		}
		p->link=o;
		root=e;
	}
		
    printf("evenodd linked list as follows...\n");
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
