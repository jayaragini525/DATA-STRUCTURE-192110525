#include<stdio.h>
int main()
{
	int n,i,A[50],C_E=0,C_O=0;
	printf("enter the number of elements in your array:");
	scanf("%d",&n);
	printf("enter the elements of your array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
		if(A[i]%2==0)
		C_E++;
		else
		C_O++;
	}
	printf("\n count even=%d\n",C_E);
	printf("\n count odd=%d\n",C_O);
	return 0;
}
