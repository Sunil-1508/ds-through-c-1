//evaluating postfix expression
#include<stdio.h>
#define max 100
float st[100];
int top=-1;
void push(float);
float pop();
float eav_post(char []);
main()
{
	char expr[100];
	float value;
	printf("enter postfix expression: ");
	gets(expr);
	value=eav_post(expr);
	printf("value is %2f",value);
}
float eav_post(char expr[])
{
	float op1,op2,value;
	int i=0;
	while(expr[i]!='\0')
	{
		if(isdigit(expr[i]))
		push((float)(expr[i]-'0'));
		else
		{
			op1=pop();
		    op2=pop();
		    switch(expr[i])
		    {
		    	case '+':value=op1+op2;
				         break;
			    case '-':value=op1-op2;
			              break;
			    case '*':value=op1*op2;
			             break;
			    case '/':value=op1/op2;
			             break;
			    case '%':value=(int)op1/(int)op2;
			             break;
		    }
		    push(value);
		}
		i++;	
	}
	return(pop());
}
void push(float value)
{
	if(top==max-1)
	{
		 printf("stack underflow");
	}
	else
	{
		top=top+1;
		st[top]=value;
	}
}
float pop()
{
	int op1,op2;
	if(top==-1)
	{
		printf("stack unedrflow");
	}
	else
	{
		op1=st[top];
		top--;
	}
	return op1;
}
