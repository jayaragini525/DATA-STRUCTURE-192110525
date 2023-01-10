#include<stdio.h>
int main()
{
	int i,fact=1,no;
	printf("Enter the number:");
	scanf("%d",&no);
	{
	if(no<0)
	{
		printf ("please enter a positive integer");
		return 0;
	}
	else
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	
	}
    }
	printf("factorial of %d is:%d",no,fact);
	return 0;
}
