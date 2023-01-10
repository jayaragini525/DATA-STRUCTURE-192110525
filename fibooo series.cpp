#include<stdio.h>
int main()
{
	int no,a=0,b=1,c,i;
	printf("enter the number:");
	scanf("%d",&no);
	printf("%d\t%d\t",a,b);
	for(i=2;i<no;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	return 0;
}
