#include<stdio.h>
#include<stdlib.h>
int *stack,*queue,*queue1;
int n,top=0,front=1,rear=0,front1=1,rear1=0;
void enqueue(int x);
int dequeue(void);
void enqueue1(int x);
void func(void);
void push(int x);
int pop(void);
void display_stack(void);
void enqueue(int x)
{
	rear=rear+1;
	queue[rear]=x;
}
int dequeue(void)
{
	return queue[front++];
}
void enqueuex(int x)
{
	rear1=rear1+1;
	queue1[rear1]=x;
}
int dequeuex(void)
{
	return queue1[front1++];
}
void func(void)
{
	while(front!=rear)
	{
		int data;
		data=dequeue();
		enqueuex(data);
	}
	push(queue[front]);
}
void func1(void)
{
	while(front1!=rear1)
	{
		int data;
		data=dequeuex();
		enqueue(data);
	}
	push(queue1[front1]);
}
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
void display_stack(void)
{
	int i;
	for(i=top;i>0;i--)
	{
		printf("Data : %d\n",stack[i]);
	}
}
int main()
{
	printf("Enter the size of the array :  \n");
	scanf("%d",&n);
	queue=(int *)malloc(sizeof(int)*n);
	queue1=(int *)malloc(sizeof(int)*n);
	stack=(int *)malloc(sizeof(int)*n);
	int i;
	for(i=1;i<=n;i++)
	{
		int data;
		printf("Enter Data :  ");
		scanf("%d",&data);
		enqueue(data);
	}
	printf("Data of First Queue :  \n");
	for(i=front;i<=rear;i++)
	{
		printf("Data %d : %d\n",i,queue[i]);
	}
	for(i=1;i<=n/2;i++)
	{
		func();
		front=1;
		rear=1;
		func1();
		front1=1;
		rear1=1;
	}
	if(n%2!=0)
	{
		push(queue[front]);
	}
	printf("\nElements of First Stack from top to bottom :  \n");
	display_stack();
	int choice;
	while(1)
	{
		printf("1->pop\n");
		printf("2->exit\n");
   		printf("Enter Your Choice :  \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				if(top>0)
				{
					int popped_element;
					popped_element=pop();
					printf("%d is popped out from the stack....\n",popped_element);
					printf("%d is the value of the top....\n",top);
				}
				else
				{
					printf("Stack is empty ....\n");
				}
				break;
			case 2 : 
				return 0;
			default :
				printf("Invalid Input....\n");
		}
	}
}
