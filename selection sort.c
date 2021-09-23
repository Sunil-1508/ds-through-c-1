//selectio sort
#include<stdio.h>
void selection(int [],int);
int small(int [],int,int);
main()
{
	int a[100],n,i,key,found;
	printf("enter no of elements in the array: ");
 	scanf("%d",&n);
 	printf("enter array\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 	}
	selection(a,n);
	printf("atfer sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void selection(int a[],int n)
{
	int pos,temp,i;
	for(i=0;i<n;i++)
	{
		pos=small(a,n,i);
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
		
	}
}
int small(int a[],int n,int i)
{
	int pos=i;
	int k;
	int small=a[i];
	for(k=i+1;k<n;k++)
	{
		if(a[k]<small)
		{
			small=a[k];
			pos=k;
		}
		
	}
    return pos;
}

