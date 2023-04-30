/*a)--> from unsorted array find max elements's  possition
  b)--> then swap max element with last element in unsorted array
       input 8

       0 1 2 3 4 5 6 7

           8 1 2 7 6 3 4 5-->i/p
           5 1 2 7 6 3 4 8-->step 1
           5 1 2 4 6 3 7 8-->step 2
           5 1 2 4 3 6 7 8-->step 3
           3 1 2 4 5 6 7 8-->step 4
           2 1 3 4 5 6 7 8-->step 5
           1 2 3 4 5 6 7 8-->step 6

#include<stdio.h>
void selection_sort(int *arr,int n)
{
	int i,j,max,maxind,temp;
	for(i=0;i<n-1;i++)
	{
		max=arr[0];
		maxind=0;
		for(j=0;j<n-i;j++)
		{
			if(arr[j]>max)
			{
				max=arr[j];
				maxind=j;
			}
		}
		temp=arr[maxind];
			arr[maxind]=arr[j-1];
			arr[j-1]=temp;
	}
}
int main()
{
	int arr[10],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}

#include<stdio.h>
void selction_sort(int *arr,int n)
{
	int i,j,max,maxind,temp;
	for(i=0;i<n-1;i++)
	{
		max=arr[0];
		maxind=0;
		for(j=0;j<n-i;j++)
		{
			if(arr[j]>max)
			{
				max=arr[j];
				maxind=j;
			}
		}
		temp=arr[maxind];
		arr[maxind]=arr[j-1];
		arr[j-1]=temp;
	}
}
int main()
{
	int n,i,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selction_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}*/
#include<stdio.h>
void selection_sort(int *arr,int n)
{
	int i,j,max,maxind,temp;
	for(i=0;i<n-1;i++)
	{
		max=arr[0];
		maxind=0;
		for(j=0;j<n-i;j++)
		{
			if(arr[j]>max)
			{
				max=arr[j];
				maxind=j;
			}
		}
		temp=arr[maxind];
		arr[maxind]=arr[j-1];
		arr[j-1]=temp;
	}
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
