//quick sort 
#include<stdio.h>
void quick_sort(int [],int,int);
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
	quick_sort(a,0,n-1);
	printf("enter array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void quick_sort(int a[],int low,int high)
{
	int i;
	int j;
	int pivot;
	int temp;
	if(low<high)
	{
		int i=low;
		int j=high;
		int pivot=i;
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<=high)
		    {
			   i++;
		    }
		    while(a[j]>a[pivot])
		    {
		    	
			    j--;
	     	}
	     	if(i<j)
		    {
		    	temp=a[i];
			    a[i]=a[j];
			    a[j]=temp;
			
		    }
	    }
	    temp=a[pivot];
	    a[pivot]=a[j];
	    a[j]=temp;
		quick_sort(a,low,j-1);
		quick_sort(a,j+1,high);  
		
	}
}
