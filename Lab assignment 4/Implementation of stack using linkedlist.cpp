#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node *top=NULL;
void push(void);
void pop(void);
void display_stack(void);
void stack_top(void);
int size(void);
void isempty(void);
void push(void)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(top==NULL)
	{
		printf("Enter Data :  \n");
		scanf("%d",&temp->data);
		temp->link=top;
		top=temp;
 	}
	else
	{
		printf("Enter Data :  \n");
		scanf("%d",&temp->data);
		temp->link=top;
		top=temp;
	}
}
void pop(void)
{
	if(top==NULL)
	{
		printf("Stack is empty....\n");
	}
	else
	{
		printf("Popped out element is %d....\n",top->data);
		top=top->link;
	}
}
void display_stack()
{
	struct node* temp;
	if(top==NULL)
	{
		printf("Stack is empty....\n");
	}
	else             
	{
		temp=top;
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->link ;
		}
		printf("\n");
	}
}
void stack_top()
	{
		if(top==NULL)
		{
			printf("Stack is empty....\n");
		}
	else
	{
		printf("Top most  element is %d....\n",top->data);
	}
}
int size(){
	struct node* temp;
	int size_of_stack=0;
	if(top==NULL)
	{
		printf("Stack is empty....\n");
	}
	else
	{
		temp=top;
		while(temp!=NULL)
		{
			size_of_stack=size_of_stack+1;
			temp=temp->link ;
		}
		printf("Size of the stack is %d....\n",size_of_stack);
	}
}
void IsEmpty()
{
	if(top==NULL)
	{
		printf("Stack is empty....\n");
	}
	else
	{
		printf("Stack is not empty....\n");
	}
}
int main()
{	
	int choice;
	while(1)
	{
		printf("1->push\n");
		printf("2->pop\n");
		printf("3->Top\n");
		printf("4->display_stack \n");
		printf("5->Size\n");
		printf("6->IsEmpty\n");
		printf("Enter the choice :  ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
	   			push();
				break;
			case 2:
				pop();
			    break;
			case 4: 
				display_stack();
			    break;
			case 3: 
				stack_top();
				break;
			case 5: 
				size();
				break;
			case 6: 
				IsEmpty();
				break;
			default: 
				printf("Invalid Choice....\n");
				break;	
		}	
    }
}
