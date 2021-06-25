#include<stdio.h>
#include<stdlib.h>
#define max 10
void push(int);
int pop(void);
int a[max],b[max],top=-1;
int main()
{
	int i,y;
	printf("enter the array\n");
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<max;i++)
	{
		push(a[i]);
	}
	for(i=0;i<max;i++)
	{
		y=pop();
		a[i]=y;
	}
	printf("the stack elements are:\n");
	for(i=0;i<max;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
void push(int x)
{
	if(top==max-1)
	printf("\nstack overflow");
	else
	b[++top]=x;
}
int pop()
{
	int y;
	if(top==-1)
	printf("\n stack over flow");
	else
	y=b[top];
	top=top-1;
	return y;
}


