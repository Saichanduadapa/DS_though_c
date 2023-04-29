/*
se=?
mid=(l+h)/2
if(arr[mid]==se
false-->
if(arr[mid]>se)---> h=m+1
if(arr[mid]<se)----> l=m-1
if(l>h)--->return -1

0  1  2  3  4
10 30 50 70 90
l      m      h
se=90
mid=(0+4)/2=2
if(arr[mid]==se
false-->
if(arr[mid]>sc)--->
if(arr[mid]<sc)--->

*/

#include<stdio.h>
int binary_search(int *arr,int l,int h,int sc)
{
	int m;
	if(l>h)
	{
		return -1;
	}
	m=(l+h)/2;
	if(arr[m]==sc)
	{
		return m;
	}
	else if(arr[m]>sc)
	{
		h=m+1;
	}
	else if(arr[m]<sc)
	{
		l=m-1;
	}
	binary_search(arr,l,h,sc);
}
int main()
{
		int n,i,arr[100],sc;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&sc);
 int res=binary_search(arr,0,n-1,sc);
		printf("%d",res);
}

