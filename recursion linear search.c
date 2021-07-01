#include<stdio.h>
int linearsearch(int [],int,int,int);
main()
{
	int a[100],key,i,r,n;
	printf("enter size of the array:");
	scanf("%d",&n);
	printf("\nenter array \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter key:");
	scanf("%d",&key);
	r=linearsearch(a,0,n-1,key);
	if(r==-1)
	{
		printf("element not found");
	}
	else
	{
	   printf("elementfound at %d th location",i+1);
	}
}
int linearsearch(int a[],int i,int n,int key)
{
	if(i>=n-1)
	return -1; 
	if(a[i]==key)
	return i+1;
	else
	return (linearsearch(a,i+1,n,key));	
}

