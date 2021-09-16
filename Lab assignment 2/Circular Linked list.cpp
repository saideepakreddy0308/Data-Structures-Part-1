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
	struct node* tail;
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
		tail=temp;
	}
    }
    tail->link=root;
    
    printf("linked list1\n");
    struct node* temp;
    int count=0;
    temp=root;
    if(temp==NULL)
    {
    	printf("list is empty.... \n");
	}
	else
	{
	do
	{
		printf("%d-",temp->data);
		count+=1;
		temp=temp->link;
	}
	while(temp!=root);
	printf("\n");
	}
	printf("no of nodes=%d \n",count);
	int j,k;
	struct node *p,*q;
	int len=count;
	i=0;
	j=count-1;
	p=q=root;
	while(i<j)
	{
		k=0;
		while(k<j)
		{
			q=q->link;
			k++;
		}
		int temp=p->data;
		p->data=q->data;
		q->data=temp;
		i++;
		j--;
		p=p->link;
		q=root;
	}
	printf(" reversed linked list1\n");
    temp=root;
    if(temp==NULL)
    {
    	printf("list is empty.... \n");
	}
	else
	{
	do
	{
		printf("%d-",temp->data);
		count+=1;
		temp=temp->link;
	}
	while(temp!=root);
	printf("\n");
	}
}
