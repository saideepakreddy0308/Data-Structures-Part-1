#include<stdio.h>
#include<ctype.h>
int top=-1;
char stack[30];
void push(char);
int  priority(char);
char pop(void);
int priority(char c)
{
	if(c=='(')
	{
		return 0;	
	}
	if(c=='+'|| c=='-')
	{
		return 1;
	}
	if(c=='*'||c=='/')
	{
		return 2;
	}
	if(c=='^')
	{
		return 3;
	}
}
char pop(void)
{
	if(top==-1)
	{
		return -1;
	}
	else
	{
		return stack[top--];
	}
}
void push(char c)
{
	stack[++top]=c;
}
main()
{
	char infix[30];
	char *i,x;
	printf("Enter the infix expression : ");
	gets(infix);
    i=infix;
	while(*i!='\0')
	{
		if(isalnum(*i))
		{
			printf("%c",*i);
		}
		else if(*i=='(')
		{
			push(*i);
		}
		else if(*i==')')
		{
			while((x=pop())!='(')
			printf("%c",x);
		}
		else
		{
			while(priority(stack[top])>=priority(*i))
			printf("%c",pop());
			push(*i);
		}
		i++;
	}
	while(top!=-1)
	{
		printf("%c",pop());
	}
}
