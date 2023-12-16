#include<stdio.h>
void division()
{
	float n1,n2,result;
	printf("enter the values\n");
	scanf("%f%f",&n1,&n2);
	result=n1/n2;
	printf("%.2f",result);
}
int main()
{
	division();
}
