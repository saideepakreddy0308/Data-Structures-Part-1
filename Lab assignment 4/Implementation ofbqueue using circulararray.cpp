#include<stdio.h>
#define size 10
int s[size];
int front =-1;
int rear=-1;

void enqueue(int);
void dequeue();
int isempty();
void display();
int isempty()
{
	if(front==-1 && rear==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enqueue(int val)
{
	if((rear+1)%size==front)
	printf("Queue is full \n");
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear=(rear+1)%size;
		s[rear]=val;
	}
}
void dequeue()
{
	if(isempty())
	{
		printf("Queuee is empty \n");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%size;
	}
}
void display()
{
	if(isempty())
	{
		printf("queue is empty \n");
	}
	else
	{
		int i;
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			printf("%d->",s[i]);
		}
		else
		{
			i=front;
			while(i<size)
			{
				printf("%d->",s[i]);
				i++;
			}
			i=0;
			while(i<=rear)
			{
				printf("%d->",s[i]);
				i++;
			}
		}
	}
}
main(){
	int ch,val;
	while(1)
	{
		printf("enter the choice: \n");
		printf("1.enqueue \n");
		printf("2.dequeue \n");
		printf("3.display \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
				printf("enter the value: \n");
				scanf("%d",&val);
				enqueue(val);
				break;
			case 2: 
				dequeue();
				break;
			case 3:
				display();
				break;
			default: 
				printf("invalid input \n");
		}
	}
}

