#include<stdio.h>
int main()
{
	int num[5],sum=0,i;
	printf("enter the 5 values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	float avg=sum/5;
	printf("%.2f",avg);
}
