#include<stdio.h>
main()
{
	int a[100],i,j,key,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter unsorted array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("after sorting\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{   if(a[j]>a[j+1])
			key=a[j];
			a[j]=a[j+1];
			a[j+1]=key;
		}
	}
    printf("sorted array\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
	
		

