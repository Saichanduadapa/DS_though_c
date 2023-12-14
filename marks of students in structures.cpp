#include<stdio.h>
struct student{
 char name[20];
 int markss1;
 int markss2;
 int markss3 ;
 int age;
 int per;
  };
  int main()
  {
  	int i,n,total;
  	float per;
  	printf("no.of students\n");
  	scanf("%d",&n);
  	struct student s[n];
  	for(i=0;i<n;i++)
  	{
  	printf("enter the name : ");
  	scanf("%s",&s[i].name);
  	printf("enter the 1st subject marks : ");
  	scanf("%d",&s[i].markss1);
  	printf("enter the 2nd subject marks : ");
  	scanf("%d",&s[i].markss2);
  	printf("enter the 3rd subject marks : ");
  	scanf("%d",&s[i].markss3);
  	printf("enter the age of the student : ");
  	scanf("%d",&s[i].age);
  }
  for(i=0;i<n;i++)
  {
  	s[i].per=(s[i].markss1+s[i].markss2+s[i].markss3);
  	if(s[i].per<80 && s[i].per<=70)
  	{
  		printf("%s\n",s[i].name);
	  }
  	
}
} 	
