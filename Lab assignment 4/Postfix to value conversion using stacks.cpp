#include<stdio.h> 
#include<math.h> 
#define MAX 20 
int isoperator(char ch) 
{  
if(ch == '+' || ch == '-' ||  ch == '*' || ch == '/' ||  ch == '^')   
return 1;  
else   
return 0;
}         
main() 
{  
char postfix[MAX];  
int val;  
char ch;  
int i = 0,top = 0;  
float val_stack[MAX], val1, val2, res; 
printf("Enter a postfix expression: \n");  
scanf("%s", postfix);  
while((ch = postfix[i]) != '\0')  
{
if(isoperator(ch) == 1)  
 {
   val2 = val_stack[--top]; 
   val1 = val_stack[--top];    
   switch(ch)   
    {
     case '+': res=val1+val2;
       			break;
     case '-': res=val1-val2;
     			break;
    case '*':  res=val1*val2;
    			break;
    case '/':  res=val1/val2;
}
    val_stack[top] = res;   
	}
   else
    val_stack[top] = ch-48;  
	top++; 
	i++; 
	 } 
printf(" Values of %s is : %f ",postfix, val_stack[0] ); 
} 
 
 
