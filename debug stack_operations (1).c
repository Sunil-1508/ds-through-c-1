//stack operations
#include<stdio.h>
#include<stdlib.h>
#define max 10
void push(int);
int pop(void);
void peep(void);
void display(void);
int a[max],top=-1;
void main()
{
	int c,x,y;
	do
	{
		printf("enter your choise :\n 1) push \n 2) pop\n 3) peep \n 4) display \n 5) exit \n");
		scanf("%d",&c);
		 switch(c)
		 { 
		   case 1 : printf("\n enter the values in to the stack :");
					scanf("%d",&x);
					push(x);
					break;
		   case 2 : y=pop();
		   			printf(" \n the deleted element is %d",y);
		   			break;
		   case 3 : peep();
		      		break;
		   case 4 : display();
		            break;
		   case 5 : exit(0);
		            break;
		 }
	}while(c!=5);
	
}
void push(int x)
{
	if(top==max-1)
	{
		printf("\n over flow");
	}
	else
	{
		a[++top]=x;
	}
}
int pop()
{
	int y;
	if(top==-1)
	{
		printf("\n under flow");
	}
	else
	{
		y=a[top];
		top=top-1;
	}
	return y;
}
void peep()
{
	if(top==-1)
    	printf(" \n stack is empty");
    else
		printf("  \n the element on the top of the stack is %d",a[top]);
}
void display()
{
	int i;
	for (i=top;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
 
