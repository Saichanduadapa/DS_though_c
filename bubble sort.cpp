/*
bubble sort
0 1 2 3 4 5 6 7
2 3 1 5 8 7 4 6

2 1 3 5 7 4 6 8  p1 sc=4

1 2 3 5 4 6 7 8  p2 sc=3

1 2 3 4 5 6 7 8  p3 sc=1

1 2 3 4 5 6 7 8  p4 sc=0 



arr[j]>arr[j+1]--->swap arr[j],arr[j+1] j++ sc++
flase--->i++


#include<stdio.h>
 void bubble_sort(int *arr,int n)
{
	int i,j,temp, sc;
	for(i=1;i<=n;i++)
	{
		sc=0;
		for (j=0;j<n-i;j++)
		{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			sc++;
		}
		}
			if(sc==0)
		{
			break;
		}
		
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
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

*/
#include<stdio.h>
void insertion_sort(int *arr,int n)
{
	int i,j,sc,temp;
	for(i=1;i<=n;i++)
	{
		sc=0;
		for(j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				sc++;
			}
		}
		if(sc==0)
		{
			break;
		}
	}
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
