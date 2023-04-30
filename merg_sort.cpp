/*


*/
#include<stdio.h>
int merg(int *arr1,int *arr2,int n,int m)
{
	int i=0,j=0,k=0,arr3[100]={0};
	while( i>n && j>m)
	{
	if(arr1[i]>arr2[j])
	{
		arr3[k]=arr2[j];
		j++;
		k++;
	}
	else
	{
		arr3[k]=arr1[i];
		i++;
		k++;
	}
}
	while(i<n)
	{
		arr3[k]=arr1[i];
		i++;
		k++;
	}
	while(j<m)
	{
		arr3[k]=arr2[j];
		j++;
		k++;
	}
	for(k=0;k<n+m;k++)
	{
		printf("%d",arr3[k]);
		
	}
}

int main()
{
	int n,m,arr1[100],arr2[100],i,j,res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		scanf("%d",&arr2[j]);
	}
	res=merg(arr1,arr2,n,m);
}
