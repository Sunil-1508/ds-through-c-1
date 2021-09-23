//merge sort
#include<stdio.h>
void merge_sort(int [],int,int);
void merge(int [],int,int,int);
void main()
{
	int n,i,a[12];
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	printf("enter array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void merge_sort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
		
	}
}
void merge(int a[],int low,int mid,int high)
{
	int temp[100];
	int i=low;
	int j=mid+1;
	int k=low;
	while(i<=mid&&j<=high)
	{
		if(a[i]<=a[j])
		{
			temp[k]=a[i];
			i++;
			k++;
			
		}
		else
		{
			temp[k]=a[j];
			j++;
			k++;
			
		}
	}
	while(i<=mid)
	{
		temp[k]=a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		temp[k]=a[j];
		j++;
		k++;
	}
	for(k=0;k<=high;k++)
	{
		a[k]=temp[k];
	}
}
