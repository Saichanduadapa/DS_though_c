#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *left;
	int data;
	struct Node *right;
};
typedef struct Node NODE;
NODE *root=NULL,*temp,*NN,*par,*res;
NODE * NewNode(int val)
{
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->left=NULL;
	NN->right=NULL;
	return NN;
}
void insert(int val)
{
	NN=NewNode(val);
	temp=root;
	if(root==NULL)
	{
		root=NN;
		return;
	}
	while(1)
	{
		if(temp->data==NN->data)
		{
			printf("Element is already in BST\n");
		}
		else if(temp->data>NN->data)
		{
			if(temp->left!=NULL)
			{
				temp=temp->left;
			}
			else
			{
				temp->left=NN;
				return;
			}
		}
		else{
			if(temp->data<NN->data)
			{
				if(temp->right!=NULL)
				{
					temp=temp->right;
				}
				else
				{
					temp->right=NN;
					return;
				}
			}
		}
	}
}
void inorder(NODE *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
void postorder(NODE *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);	
	}
}
void preorder(NODE *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
int search(int key)
{
	temp=root;
	while(temp)
	{
		if(temp->data==key)
		{
			return 1;
			break;
		}
		else if(temp->data>key)
		{
			temp=temp->left;
		}
		else if(temp->data<key)
		{
			temp=temp->right;
		}
	}
	return 0;
}
NODE *delet(int key)
{
	if(root==NULL)
	{
		return NULL;
	}
	temp=root;
	par=NULL;
	while(temp&&temp->data!=key)
	{
		if(temp->data>key)
		{
			par=temp;
			temp=temp->left;
		}
		else if(temp->data<key)
		{
			par=temp;
			temp=temp->right;
		}
	}
	if(temp==NULL)
	{
		return NULL;
	}
	if(temp->right==NULL && temp->left==NULL)
	{
		//zero child
		res=temp;
		if(par->right!=NULL && par->right->data==key)
		{
			par->right=NULL;
		}
		else if(par->left!=NULL && par->left->data==key)
		{
			par->left=NULL;
		}
		return res;
	}	
	else if(temp->left==NULL)
	{
		//single child right
		res=temp;
		if(par->left!=NULL && par->left->data==key)
		{
			par->left=temp->right;
		}
		else if(par->right!=NULL && par->right->data==key)
		{
			par->right=temp->right;
		}
		return res;
	}	
	else if(temp->right==NULL)
	{
		// single child left
		res=temp;
		if(par->left!=NULL && par->left->data==key)
		{
			par->left=temp->left;
		}
		else if(par->right!=NULL && par->right->data==key)
		{
			par->right=temp->left;
		}
		return res;
		
	}
	else if(temp->left!=NULL && temp->right!=NULL)
	{
		// two  child
		NODE *p,*t,*val;
		t=temp->right;
		p=NULL;
		while(t->left)
		{
			p=t;
			t=t->left;
		}
		if(p!=NULL)
		{
			res=t;
			val=t->data;
			t->data=temp->data;
			temp->data=val;
			p->left=t->right;
			return res;
		}
		else
		{
			res=t;
			val=t->data;
			t->data=temp->data;
			temp->data=val;
			temp->right=t->right;
			return res;
		}
		
		
	}
}
int main()
{
	int ch,val,key,n,i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&val);
		insert(val);
	}
	while(1)
	{
		printf("1.Insert\n2.delete\n3.search\n4.Inorder\n5.Postorder\n6.preorder\n7.levelorder\n8.Exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert
		    scanf("%d",&val);
			insert(val);	
		}
		else if(ch==2)
		{
			//delete
			scanf("%d",&key);
			res=delet(key);
			if(res)
			{
				printf("%d",res->data);
				free(res);
			}
			else
			{
				printf("Element is not found\n");
			}
			
		}
		else if(ch==3)
		{
			//search
			scanf("%d",&key);
		    if(search(key))
		    {
		    	printf("Element is Found\n");
			}
			else
			{
				printf("Elenment is not Found\n");
			}
		}
		else if(ch==4)
		{
			//in order
			inorder(root);
		}
		else if(ch==5)
		{
			//post order
			postorder(root);
		}
		else if(ch==6)
		{
			//pre order
		    preorder(root);	
		}
		else if(ch==7)
		{
			//level order
		}
		else
		{
			break;
		}
	}
	
}/*
13
50 40 80 30 45 70 90 25 35 42 48 65 100
*/
