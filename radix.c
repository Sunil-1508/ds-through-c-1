
//radix sort
#include<stdio.h>
void radix(int [],int);
int largest(int [],int); 
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
	radix(a,n);
	printf("atfer sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int largest(int a[],int n)
{
	int large=a[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	printf("%d",large);
	return large;
}
void radix(int a[],int n)
{
	int large,passes,i,j,k,nop=0,div=1,loc;
	int bucket[10][10],buck[10];
	large=largest(a,n);
	while(large>0)
	{
		large=large/10;
		nop++;
	}
	for(passes=0;passes<nop;passes++)
	{
		for(i=0;i<10;i++)
		{
			buck[i]=0;
		}
		for(i=0;i<n;i++)
		{
			loc=(a[i]/div)%10;
			bucket[loc][buck[loc]]=a[i];
			buck[loc]++;
			
		}
		i=0;
		for(k=0;k<10;k++)
		{
			for(j=0;j<buck[k];j++)
			{
				a[i]=bucket[k][j];
				i++;
			}
		}
		div=div*10;
	}
}








