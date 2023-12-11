#include<stdio.h>
swap(int *x,int *y)
int main()
{
	int n1,n2;
	printf("enter the value ");
	scnaf("%d%d",&n1,&n2);
	swap(&n1,&n2);
	printf("%d%d",n1,n2);
}
swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
