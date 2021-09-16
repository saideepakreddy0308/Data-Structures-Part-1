#include<stdio.h>
#include<stdlib.h>
int top=0,n;
void push(int x,int a[]);
int pop(int a[]);
int top_last_element(int a[]);
int size(int a[]);
int IsEmptyStack(int a[]);
int IsFullStack(int a[]);
void push(int x,int a[])
{
	top=top+1;
	a[top]=x;
	printf("\nElement insertion in stack is successfull....\n");
	return;
}
int pop(int a[])
{
	return a[top--];
}
int top_last_element(int a[])
{
	return a[top];
}
int size(int a[])
{
	return top;
}
int IsEmptyStack(void)
{
	if(top==0)
	{
		printf("Stack is Empty....\n");
	}
	else 
	{
		printf("Stack is not Empty....\n");
	}
}
int IsFullStack(void)
{
	if(top==n)
	{
		printf("Stack is Full....\n");
	}
	else 
	{
		printf("Stack is not Full....\n");
	}
}
int main()
{
	printf("Enter the size of the array :  ");
	scanf("%d",&n);
	int a[n];
	int choice;
	while(1)
	{
		printf("1->push\n");
		printf("2->pop\n");
		printf("3->top : last element\n");
		printf("4->size of the stack\n");
		printf("5->IsStackEmpty\n");
		printf("6->IsStackFull\n");
		printf("7->exit\n");
   		printf("Enter Your Choice :  \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				if(top<n)
				{
					int data;
					printf("Enter Data :  ");
					scanf("%d",&data);
					push(data,a);
				}
				else if(top>=n)
				{
					printf("Stack is full !! Element cannot be inserted....\n");
				}
				break;
			case 2 :
				if(top>0)
				{
					int popped_element;
					popped_element=pop(a);
					printf("%d is popped out from the stack....\n",popped_element);
					printf("%d is the value of the top....\n",top);
				}
				else
				{
					printf("Stack is empty ....\n");
				}
				break;
			case 3 :
				if(top!=0)
				{
					printf("%d is the last element in the stack....\n",top_last_element(a));
				}
				else
				{
					printf("Stack is empty...\n");
				}
				break;
			case 4 :
				printf("No of elements in the stack are %d....\n",size(a));
				break;
			case 5 :
				IsEmptyStack();
				break;
			case 6 :
				IsFullStack();
				break;
			case 7 :
				return 0;
			default :
				printf("Invalid choice....\n");
				break;
		}
	}
	free(a);
}
