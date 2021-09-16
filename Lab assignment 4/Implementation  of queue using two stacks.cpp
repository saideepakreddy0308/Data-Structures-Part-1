#include<stdio.h>
#include<stdlib.h>
int top=0,top1=0,n;
int *stack,*stack1,*queue;
int front=0,rear=0;
void push(int x);
int pop(void);
void pushx(int x);
int popx(void);
void push(int x)
{
	top=top+1;
	stack[top]=x;
	printf("\nElement insertion in stack is successfull....\n");
	return;
}
int pop(void)
{
	return stack[top--];
}
void pushx(int x)
{
	top1=top1+1;
	stack1[top1]=x;
	printf("\nElement insertion in stack1 is successfull....\n");
	return;
}
int popx(void)
{
	return stack1[top1--];
}
int main()
{
	printf("Enter the size of the array :  \n");
	scanf("%d",&n);
	stack=(int *)malloc(sizeof(int)*n);
	stack1=(int *)malloc(sizeof(int)*n);
	int i=1;
	for(i=1;i<=n;i++)
	{
		int data;
		printf("Enter Data :  ");
		scanf("%d",&data);
		push(data);
	}
	printf("\nElements of First Stack from top to bottom :  \n");
	for(i=top;i>0;i--)
	{
		printf("Data %d :  %d\n",i,stack[i]);
	}
	for(i=1;i<n;i++)
	{
		int data;
		data=pop();
		pushx(data);
	}
	printf("\nElements of Second Stack from top to bottom :  \n");
	for(i=top1;i>0;i--)
	{
		printf("Data %d :  %d\n",i,stack1[i]);
	}
	front=front+1;
	queue=(int *)malloc(sizeof(int)*n);
	queue[front]=pop();
	rear=front+1;
	for(i=1;i<n;i++)
	{
		queue[rear]=popx();
		rear=rear+1;
	}
	printf("Elements in the Queue are :  \n");
	for(i=front;i<rear;i++)
	{
		printf("Data %d : %d\n",i,queue[i]);
	}
	free(stack);
	free(stack1);
	free(queue);
}
