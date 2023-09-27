#include<stdio.h>
int main()
{
	int n,r,p=1;
	printf("enter the value\n");
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		p=p*r;
		n=n/10;
	}
	printf("%d",p);
}
