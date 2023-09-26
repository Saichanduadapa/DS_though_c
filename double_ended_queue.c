/*
enque-> rare
deque-> front

enque-> front
deque-> rare

front=0 && rare=size-1
 full
 rare=front-1
 full
 
 f==-1 && r==-1
 f=0;
 r=0;
 eq[rare]=val
 
 //deque-->
 
 if rare==-1 && front==-1
 return-1
 if rare==front
 val=queue[front]
 f=-1;
 r=-1;
 val=queue[front]
 front=(front+1)%size

//dequue at rare-->
 if r==-1 f=-1
 return -1;
 
 if f==r
 val=queue[rare]
 f=-1;
 r=-1;
 return val;
 
 r--
 if r=0
 r=size-1;

*/
#include<stdio.h>
int queue[100],size,rare=-1,front=-1,val;
void enque_rare(int val)
{
	if(front==0 && rare==size-1)
	{
		printf("queue is full\n");
	}
	else if(front==0 && rare==front-1 )
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rare==-1)
	{
		front=0;
		rare=0;
		queue[rare]=val;
	}
	else
	{
		rare=(rare+1)%size;
		queue[rare]=val;
	}
}
void display()
{
	int i=front;
	if(rare==-1 && front==-1)
	{
		printf("Queue is empty\n");
		return;
	}
			while(i!=rare)
			{
				printf("%d",queue[i]);
				i=(i+1)%size;
			}
			printf("%d\n",queue[i]);
}
int deque_front( )
{
	if(front==-1 && rare==-1)
	{
		return-1;
	}
	else if(front==rare)
	{
		val=queue[front];
        front=-1;
        rare=-1;	
	}
	else
	{
		val=queue[front];
		front=(front+1)%size;
		return val;	              
	}
}
void enque_front(int val)
{
	if(front==0 && rare==size-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rare==-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rare==-1)
	{
		front==0;
		rare=0;
		val=queue[front];
	}
	else if(front==0)
	{
		front=size-1;
	    queue[front]=val;
	}
	else
	{
		front=(front+1)%size;
		val=queue[front];
	}
}
int deque_rare()
{
	int val;
	if(front==-1 && rare==-1)
	{
		return -1;
	}
	else if(front==rare)
	{
		val=queue[rare];
		front=-1;
		rare=-1;
		return val;
	}
	else if(rare==0)
	{
		val=queue[rare];
		rare=size-1;
		return val;
	}
	else
	{
		val=queue[rare];
		rare--;
		return val;
	}
}
int main()
{
	scanf("%d",&size);
	while(1)
	{
		printf("1.enque at rare2.deque at front3.display4.enque at front,5.deque at rare,6.exit");
		int ch;
		scanf("%d",&ch);
		if(ch==1)
		{
			//enque at rare
			scanf("%d",&val);
			enque_rare(val);
		}
		else if(ch==2)
		{
			// deque at front
			scanf("%d",&val);
			val=queue[front];
			deque_front( );
			
		}
		else if(ch==3)
		{
			// display
			display();
			
		}
		else if(ch==4)
		{
			scanf("%d",&val);
			enque_front(val);
		}else if(ch==5)
		{
			scanf("%d",&val);
			deque_rare();
		}
		
		else
		{
			break;
		}
	}
	
}
