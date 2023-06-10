#include<stdio.h>
int factorial(int n);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=factorial(n);
	printf("%d",res);
}
int factorial(int n)
{

	if (n==1)
	{
		return 1;
	}
	else
	{
		return (n*(factorial(n-1)));
	}
}
