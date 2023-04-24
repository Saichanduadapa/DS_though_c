#include<stdio.h>
int linear_search(int *arr,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)
		{
		return i;
		}
	}
	return-1;
	
}
int main()
{
	int n,arr[100],i,se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	int res=linear_search(arr,n,se);
	printf("%d ",res);
}
