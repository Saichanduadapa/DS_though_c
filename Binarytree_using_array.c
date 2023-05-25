/*
n=9




left=2*i+1
right=2*i+1




*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	struct Node *left;
	int data;
	struct Node *right;	
}NODE;
NODE *root,*queue[100],*NN;
NODE * newnode(int val)
{
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->left=NULL;
	NN->right=NULL;
	return NN;
}
NODE *constructTree(int *arr,int n)
{
	int i=0,front=0,rare=0;
	NN=newnode(arr[0]);
	queue[rare]=NN;
	while(1)
	{
		if(2*i+1>n)
		{
			return queue[0];
		}
		if(arr[2*i+1]!=0)
		{
			// left child
			NN=newnode(arr[2*i+1]);
			queue[++rare]=NN;
			queue[front]->left=NN;
		}
		if(2*i+2<n && arr[2*i+2]!=0)
		{
			// right child
			NN=newnode(arr[2*i+2]);
			queue[++rare]=NN;
			queue[front]->right=NN;
			
		}
		front++;
		i++;
		
	}
}
void inorder(NODE *root)
{
	if(root)
	{
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);	
	}
}
int main()
{
	int n,i,arr[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	root=constructTree(arr,n);
	inorder(root);	
}














