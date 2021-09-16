#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* root= NULL;
void append(void);
int length(void);
void deletion(void);
void display(void);
void addatafter(void);
void reverse(void);
void nthnode(void);
int main()
{
	int ch,len;
	while(1)
	{
		printf("1.append \n");
		printf("2.length \n");
		printf("3.deletion \n");
		printf("4.display \n");
		printf("5.addatafter \n");
		printf("6.reverse the data \n");
		printf("7.nth node from last \n");
		printf("enter the choice:  \n");
		scanf("%d",&ch);
		switch(ch)
		{
		        case 1: append();
		                break; 
		      	case 2: len=length();
		      	        printf("length: %d  \n",len);
		        		break; 
		        case 3: deletion();
		        		break; 
		        case 4: display();
		        		break; 
		        case 5: addatafter();
		        		break; 
		        case 6: reverse();
				        break;	
				case 7: nthnode();
				    	break;			
		        default: ("not in the options...\n");
		}
	}
}
void append()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data: \n");
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

int length()
{
	int count=0;
	struct node* temp;
	temp=root;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}
	return count;
}

void display()
{
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
		printf("%d-",temp->data);
		temp=temp->link;
	}
	printf("\n\n");	
	}
}
void deletion()
{
	struct node* temp;
	int loc,i;
	printf("enter the value of location: \n");
	scanf("%d",&loc);
	if(loc>length())
	{
		printf("enter the valid location: \n");
	}
	else if(loc==1)
	{
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	else
	{
		struct node* p,*q;
		p=root;
		for(i=1;i<loc-1;i++)
		{
			p=p->link;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
	display();
}
void addatafter()
{
	struct node* temp,*p;
	int loc,len,i=1;
	printf("enter the location: \n");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
		printf("invalid loction....!! \n");
	}
	else if(loc==0)
	{
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("enter the node data: \n");
	scanf("%d",&temp->data);
	temp->link=root;
	root=temp;	
	}
	else 
	{
		p=root;
		while(i<loc)
		{
		p=p->link;
		i++;	
		}
		temp=(struct node*)malloc(sizeof(struct node*));
		printf("enter the node data: \n");
		scanf("%d",&temp->data);
		temp->link=p->link;
		p->link=temp;	
	}
	display();
}
void reverse()
{
	int i,j,k;
	struct node *p,*q;
	int len=length();
	i=0;
	j=len-1;
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
	display();
}
void nthnode()
{
    struct node* temp;
    temp=root;
    int n,i;
    printf("enter the value of nth node: ");
    scanf("%d",&n);
    if(temp==NULL)
    {
    	printf("list is empty.... \n");
	}
	else
	{
	i=0;	
	while(i<length()-n)
	{
		temp=temp->link;
		i++;
	}
	printf("%d",temp->data);
	}
	printf("\n");
	
	
}
	
	
	
