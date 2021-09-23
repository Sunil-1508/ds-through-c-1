#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node *ptr;
struct node *preptr;
struct node *newnode;
struct node *insert_beg(struct node *);
struct node *dispaly(struct node *);
main()
{
	int choice;
	
	newnode=(struct node*)malloc(sizeof(struct node));
	do
	{
		printf("\n\n***MAIN MENU***\n");
		printf("\n1.insert_beg)\n 2.)insert_end \n 3.)insert_bef\n 4.)insert_aft\n 5.)exit");
		printf("\nenter choice:");
	    scanf("%d",&choice);
		switch(choice)
		{
			case 1:start=insert_beg(start);
			       break;
		    case 2:start=dispaly(start);
		    
		}
	}while(choice!=3);

}
struct node *insert_beg(struct node *start)
{
	struct node *ptr,*newnode;
	int num;
	
	do
	
	{
		printf("\nentert untill -1");
	    scanf("%d",&num);
		
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=num;
		
		if(start==NULL)
		{
			start=newnode;
			newnode->next=NULL;

		}
		else
		{
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=newnode;
			newnode->next=NULL;
		}
		
	}while(num!=-1);
	return start;	
}
struct node *dispaly(struct node *start)
{
struct node *ptr;
ptr = start;
while(ptr != NULL)
{
printf("\t %d", ptr -> data);
ptr = ptr -> next;
}
return start;
}
