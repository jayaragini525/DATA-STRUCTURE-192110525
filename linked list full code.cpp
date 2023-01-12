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
	void sll_insert_at_begin()
	{
		int ele;
		printf("enter the element:");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		p=head;
		head=newnode;
		newnode->next=p;
		p=newnode;
	}
	void sll_insert_at_end()
	{
		int ele;
		printf("enter the element");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		for(p=head;p->next!=NULL;p=p->next);
		p->next=newnode;
		p=newnode;
	}
	void sll_insert_at_any_position()
	{
		int ele,pos,i;
		printf("enter the element:");
		scanf("%d",&ele);
		printf("enter the position:");
		scanf("%d",&pos);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		for(p=head,i=1;i<pos;p=p->next,i++)
		t=p;
		t->next=newnode;
		newnode->next=p;
		p=newnode; 
	}
	void sll_delete_at_begin()
	{
		p=head;
		head=p->next;
		free(p);
		p=head;
	}
	void sll_delete_at_end()
	{
		for(p=head;p->next!=NULL;p=p->next)
		t=p;
		t->next=NULL;
		free(p);
		p=t;
	}
	void sll_delete_at_any_position()
	{
		int i,pos=3;
		printf("enter the position:");
		scanf("%d",&pos);
		for(p=head,i=1;i<pos;p=p->next,i++)
		t=p;
		t->next=p->next;
		free(p);
		p=t;
	}
	int main()
	{
		int cho;
	    do
	{
		printf("\n****MENU*****\n");
		printf("\n1.create\n2.display\n3.insert_at_begin\n4.insert_at_end\n5.insert_at_any_position\n6.delete_at_begin\n7.delete_at_end\n8.delete_at_any_position\n9.exit\n");
		printf("enter the choice:");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:create_sll();
			break;
			case 2:display_sll();
			break;
			case 3:sll_insert_at_begin();
			break;
			case 4:sll_insert_at_end();
			break;
			case 5:sll_insert_at_any_position();
			break;
			case 6:sll_delete_at_begin();
			break;
			case 7:sll_delete_at_end();
			break;
			case 8:sll_delete_at_any_position();
			break;
			case 9:exit(0);
			default:
				printf("enter the choice between 1 to 9\n");
		}
	}
	while (cho>0&&cho<=9);
    }
