#include<stdio.h>
#include<stdlib.h>
void array_insert()
{
	int ele,pos,i,A[100],n;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array element:\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf ("enter the element to be inserted:\n");
	scanf("%d",&ele);
	printf("enter the position of the  element to be inserted:\n");
	scanf("%d",&pos);
	for(i=n;i>pos;i--)
	{
		A[i]=A[i-1];
	}
	A[pos]=ele;
	for(i=0;i<=n;i++)
	printf("%d\t",A[i]);
}
void array_delete()
{
	int ele,pos,i,A[100],n;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array element:\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("enter the position of the  element to be deleted:\n");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	A[i]=A[i+1];
	for(i=0;i<n-1;i++)
	printf("%d\t",A[i]);
}
void array_display()
{
	int ele,pos,i,A[100],n;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array element:\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	printf("%d\t",A[i]);
	
}
int main()
{
	int cho;
	do
	{
		printf("\n1.insertion\n2.deletion\n3.display");
		printf("enter the choice");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:array_insert();
			break;
			case 2:array_delete();
			break;
			case 3:array_display();
			break;
			case 4:exit(0);
			default:
			printf("enter the choice between 1to 4\n");
		}
	}
	while (cho>0&&cho<=4);
}
