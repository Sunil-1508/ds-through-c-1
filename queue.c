//queue operations
#include<stdio.h>
#define max 10
int a[max],rear=-1,front=-1;
void enqueue(int);
int dequeue();
void dispaly();
main()
{
	int x,y,p,ch;
	do
	{
		printf("\n**MAIN MENU**\n 1.enqueue\n 2.dequeue\n 3.dispaly\n 4.exit\n");
		printf("enter your option:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nenter the elemnt you insert:");
			       scanf("%d",&x);
			       enqueue(x);
				   break;
			case 2:y=dequeue();
			       printf("\nfirst element deleted");
			       break;
			case 3:dispaly();
			       break;
			case 4:exit(1);
			       break;
			default:printf("wrong option");
		}
	}while(ch!=4);
}
void enqueue(int x)
{
	if(front=0&&rear==max-1)
	{
		printf("queue overflow");
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		a[rear]=x;
	}
	else
	{
		rear=rear+1;
		a[rear]=x;
	}
}
int dequeue()
{
	int y;
	if(front==-1 && rear==-1)
	{
		printf("queue underflow");
	}
	else if(front>rear)
	{
		printf("queue underflow");
		
	}
	else
	{
		y=a[front];
		front++;
	}
}
void dispaly()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",a[i]);
	}
}
