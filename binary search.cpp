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
int binary_search(int *arr,int n,int sc)
{
 int i,l=0,h=n-1,mid;
while(l<h)
{
 mid=(l+h)/2;
 if(arr[mid]==sc)
 {
 	return mid;
 }
 else if(arr[mid]>sc)
 {
 	h=mid+1;
 }
 else if(arr[mid]<sc)
 {
 	l=mid-1;
 }
}
return -1;	
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
 int res=binary_search(arr,n,sc);
		printf("%d",res);
}/*
#include<stdio.h>
binary_search(int *arr,int n,int se)
{
	int i,l,h,m;
	l=0;
	h=n-1;
	while (l<h)
	{
		m=(l+h)/2;
		if(arr[m]==se)
		{
			return m;
		}
		else if(arr[m]>se)
		{
			h=m+1;
		}
		else if (arr[m]<se)
		{
			l=m-1;
		}
		
	}
	return -1;
}
int main()
{
	int n,arr[100],se,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	scanf("%d",&se);
	int res=binary_search(arr,n,se);
	printf("%d",res);
}*/
