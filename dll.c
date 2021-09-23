// doublelinked list operations
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *start=NULL;
struct node *ptr;
struct node *new_node;
struct node *insertbeg(struct node *);
struct node *insertlas(struct node *);
struct node *delbg(struct node *);
struct node *dellas(struct node *);
void *dispaly(struct node *);
main()
{
	int ch;
	new_node=(struct node*)malloc(sizeof(struct node));
	do
	{
		printf("\n***MAIN MENU***\n");
		printf("\n1.insertbeg\n2.insertlas\n3.delbg\n4.dellas\n5.dispaly\n6.exit\n");
		printf("enter your option :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:start=insertbeg(start);
			       break;
		    case 2:start=insertlas(start);
			       break;
			case 3:start=delbg(start);
			       break;
			case 4:start=dellas(start);
			       break;
			case 5:dispaly(start);
			       break;
			case 6:exit(0);
			       break;
			default:printf("\n WRONG OPTION\n");
		}
	}while(ch!=6);
	
}
struct node *insertbeg(struct node *start)
{
	int val;
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("enter data: ");
	scanf("%d",&val);
	if(start==NULL)
	{
		new_node->data=val;
		new_node->next=NULL;
		new_node->prev=NULL;
		start=new_node;
	}
	else
	{
		
		new_node->data=val;
		new_node->next=start;
		new_node->prev=NULL;
		start->prev=new_node;
		start=new_node;
	}
	return start;
}
struct node *insertlas(struct node *start)
{
	int val;
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("enter data: ");
	scanf("%d",&val);
	if(start==NULL)
	{
		new_node->data=val;
		new_node->next=NULL;
		new_node->prev=NULL;
		start=new_node;
	}
	else
	{
		
		new_node->data=val;
		new_node->next=NULL;
	    ptr=start;
	    while(ptr->next!=NULL)
	    {
	    	ptr=ptr->next;
		}
		ptr->next=new_node;
		new_node->prev=ptr;
	}
	return start;
}
void *dispaly(struct node *start)
{
  struct node *ptr;
  ptr = start;
  while(ptr != NULL)
  {
    printf("%d\t", ptr -> data);
    ptr = ptr -> next;
  }
}
struct node *delbg(struct node *start)
{
	if(start==NULL)
	{
		printf("\nno nodes");
		
	}
	else
	{
		ptr=start;
		start=start->next;
		start->prev=NULL;
	}
	free(ptr);
	return start;
}
struct node *dellas(struct node *start)
{
	struct node *preptr;
	if(start==NULL)
	{
		printf("no nodes\n");
	}
	else
	
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		preptr->next=NULL;
		
	}
	free(ptr);
	return start;	
}   
