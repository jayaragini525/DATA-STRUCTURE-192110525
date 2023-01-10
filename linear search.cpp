#include<stdio.h>
int main()
{
	int A[10],i,n,flag=0,key;
	printf("enter the element to be search:\n");
	scanf("%d",&n);
	printf("enter the array element :\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("enter the element to be search:\n");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	{
		if(A[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("the element is found\n");
	else
	printf("the element is not found\n");
}
