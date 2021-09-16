#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char string[30];
int top=-1,size;
char stack[15];
void push(char x);
void pop(void);
void push(char x)
{
	top=top+1;
	stack[top]=x;
	return;
}
void pop(void)
{
	top=top-1;
}
int main()
{
	printf("Enter the string with X in the middle :  ");
	gets(string);
	size=strlen(string);
	puts(string);
	int i=0,count=0;
	while(string[i]!='\0')
	{
		if(string[i]!='x' && string[i]!='X')
		{
			push(string[i]);
			i=i+1;
		}
		else
		{
			break;
		}
	}
	int n=i+1;
	while(top!=0)
	{
		if(string[n]==stack[top])
		{
			count++;
			n++;
			pop();
		}
		else
		{
			printf("String is not a palindrome....");
			return 0;
		}
	}
	printf("String is a palindrome....");
}
