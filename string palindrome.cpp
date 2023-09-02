#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter the value\n");
	scanf("%s",str);
	int i,flag=0,length=strlen(str);
	for(i=0;i<length/2;i++)
	{
		if(str[i]!=str[length-i-1])
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
}
