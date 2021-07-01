#include<stdio.h>
void linearsearch(int,int,int);
main()
{
	int a[40],key,n,i;
	printf("enter no of elements in the array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key elemenet to search:");
	scanf("%d",&key);
	linearsearch(a,key,n);
}
	
	void linearsearch(int a[],int key,int n);
	{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		flag++;
		break;
	    }
    }
	if(flag==0)
	{
		printf("element nnot found");
	}
	else
	printf("element found at %d ",i+1);
	 
}
