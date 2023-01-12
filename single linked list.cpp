#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL,*p,*t,*newnode;
void create_sll()
{
	int ele,i,n;
	printf("enter the no of element in the list:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the element:");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}
	void display_sll()
	{
		if(head==NULL)
		printf("SLL is empty");
		else
		for(p=head;p!=NULL;p=p->next)
		printf("%d->",p->data);
	}
	int main()
	{
		int cho;
	    do
	{
		printf("****MENU*****");
		printf("\n1.create\n2.display\n3.exit\n");
		printf("enter the choice");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:create_sll();
			break;
			case 2:display_sll();
			break;
			case 3:exit(0);
			default:
			printf("enter the choice between 1 to 3\n");
		}
	}
	while (cho>0&&cho<=3);
    }
