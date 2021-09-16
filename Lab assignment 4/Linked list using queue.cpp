#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
struct node *head=NULL,*temp=NULL;
struct Queue
{
	struct node *front;
	struct node *rear;
};
struct Queue queue;
void enqueue(int x);
int dequeue(void);
void display(void);
void enqueue(int x)
{
	struct node *duplicate=NULL;
	duplicate=(struct node*)malloc(sizeof(struct node));
	duplicate->data=x;
	duplicate->link=NULL;
	if(head==NULL)
	{
		head=duplicate;
		queue.front=head;
		queue.rear=head;
		temp=head;
	}
	else
	{
		queue.rear->link=duplicate;
		queue.rear=queue.rear->link;
	}
}
int dequeue(void)
{
	int x;
	x=queue.front->data;
	queue.front=queue.front->link;
	return x;
}
void display(void)
{
	struct node *temp;
	temp=queue.front;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
	printf("\n");
}
int main()
{
	int n;
	while(1)
	{
		printf("1->Enqueue\n");
		printf("2->Dequeue\n");
		printf("3->Display\n");
		printf("4->exit\n");
		int choice;
		printf("Enter the choice :  ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				int data;
				printf("Enter Data :  ");
				scanf("%d",&data);
				enqueue(data);
				break;
			case 2 :
				if(queue.front!=NULL)
				{
					printf("%d is dequed from the linked list...\n",dequeue());
				}
				else
				{
					printf("Linked list is empty....\n");
				}
			case 3 :
				if(queue.front!=NULL)
				{
					display();
				}
				else
				{
					printf("Linked list is empty....\n");
				}
				break;
			case 4 :
				return 0;
			default :
				printf("Invalid choice....\n");
				break;	
		}
	}
}
