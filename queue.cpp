#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int front=-1,rear=-1;
void enqueue()
{
	int ele;
	printf("enter element");
	scanf("%d",&ele);
	if(rear==size-1)
	printf("queue is full");
	else if(front ==-1&&rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	rear=rear+1;
	queue[rear]=ele;
}
void dequeue()
{
	int ele;
	if(front==-1&rear==-1)
	printf("queue is empty");
	else
	{
		ele=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		front=front+1;
	}
	printf("the element %d is deleted",ele);
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	printf("queue is empty");
	else
	for(i=front;i<=rear;i++)
	printf("%d\t",queue[i]);
}
int main()
{
	int cho;
	do
	{
		printf("\n1.enqueue\n2.dequeue\n3.display");
		printf("enter the choice");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:
			printf("enter the choice between 1to 4\n");
		}
	}
	while (cho>0&&cho<=4);
}

