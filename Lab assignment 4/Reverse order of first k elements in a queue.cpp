#include<stdio.h>
#include<stdlib.h>
int n,k,front=0,rear=-1,top=0,top1=0;
int *queue,*stack,*stack1;
void enqueue(int x);
int dequeue(void);
void enqueue(int x)
{
	rear=rear+1;
	queue[rear]=x;
	return;
}
int dequeue(void)
{
	return queue[front++];
}
void push(int x)
{
	stack[top]=x;
	top=top+1;
	return;
}
void pushx(int x)
{
	stack1[top1]=x;
	top1=top1+1;
	return;
}
int pop(void)
{
	return stack[--top];
}
int popx(void)
{
	return stack1[--top1];
}
int main()
{
	printf("Enter the size of the array :  ");
	scanf("%d",&n);
	queue=(int *)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++)
	{
		int data;
		printf("Enter Data %d :  ",i);
		scanf("%d",&data);
		enqueue(data);
	}
	for(i=front;i<=rear;i++)
	{
		printf("Data :  %d\n",queue[i]);
	}
	int k;
	printf("Enter the value of k :  ");
	scanf("%d",&k);
	stack=(int *)malloc(sizeof(int)*k);
	for(i=0;i<k;i++)
	{
		int x;
		x=dequeue();
		push(x);
	}
	stack1=(int *)malloc(sizeof(int)*(n-k));
	for(i=k;i<n;i++)
	{
		int x;
		x=dequeue();
		pushx(x);
	}
	front=0;
	rear=-1;
	for(i=top-1;i>=0;i--)
	{
		int x;
		x=pop();
		enqueue(x);
	}
	top=0;
	for(i=top1-1;i>=0;i--)
	{
		int x;
		x=popx();
		push(x);
	}
	for(i=top-1;i>=0;i--)
	{
		int x;
		x=pop();
		enqueue(x);
	}
	for(i=front;i<=rear;i++)
	{
		printf("Data :  %d\n",queue[i]);
	}
	
}
