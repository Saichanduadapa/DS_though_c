/*
#include<stdio.h>
int queue[100],rear=-1,front=-1,size;

void enque(int val)
{
	if(rear==size-1)		
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=val;
	}
	else
	{
		rear++;
		queue[rear]=val;
	}
}
void display()
{
	int i;
	if(rear==-1 && front==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}
int deque()
{
	int val;
	if(rear==-1 && front==-1)
	{
		return -1;
	}
	if(front==rear)
	{
		val=queue[front];
		rear=-1;
		front=-1;
		return val;
	}
	val=queue[front];
	front++;
	return val;
}
int main()
{
	int ch,val;
	scanf("%d",&size);
	while(1)
	{
		printf("1. enque 2. deque 3.display 4.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			//Enque operation
			scanf("%d",&val);
			enque(val);
		}
		else if(ch==2)
		{
			//deque operation
			val=deque();// fun call
			if(val==-1)
			{
				printf("Queue is Empty\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(ch==3)
		{
			display();
		}
		else
		{
			break;
		}
	}
}
*/
#include<stdio.h>
int que[100],front=-1,rear=-1,size;
void enqueue(int val)
{
	if (rear==size-1)
	{
		printf("Queue is full \n");
	}
	if (front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		que[front]=val;
	}
	else
	{
		rear++;
		que[rear]=val;
	}
}
void display()
{
	if (front==-1 && rear==-1)
	{
		printf("Queue is full \n");
	}
	else
	{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d ",que[i]);
		}
		printf("\n");
	}
}
int dequeue()
{
	int val;
	if (front==-1 && rear==-1)
	{
		return -1;
	}
	else if (front==rear)
	{
		val=que[front];
		front=-1;
		rear=-1;
		return  val;
	}
	val=que[front];
	front++;
	return val;
}
int main()
{
	int ch,val,res;
	scanf("%d",&size);
	while(1)
	{
		printf("1.enqueue 2.dequeue 3.display 4.exit :- ");
		scanf("%d",&ch);
		if (ch==1)
		{
			scanf("%d",&val);
			enqueue(val);
		}
		else if(ch==2)
		{
			res=dequeue();
			if (res==-1)
			{
				printf("Queue is empty \n");
			}
			else
			{
				printf("%d\n",res);
			}
		}
		else if (ch==3)
		{
			display();
		}
		else
		{
			break;
		}
	}
}
