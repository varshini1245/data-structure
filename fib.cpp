#include<stdio.h>
int main()
{
	int a=0,b=1,n,s;
	printf("Enter limit");
	scanf("%d",&n);
	printf("Fibonacci series: ");
	printf("%d \n %d  \n  ",a,b);
	for(int i=0;i<n;i++)
	{
		s=a+b;
		a=b;
		b=s;
		printf("%d  \n",s);	
	}
	return 0;
}
