#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,r,s,m,n;
	printf("Enter the row for 1st mat \n");
	scanf("%d",&r);
	printf("Enter the column for 1st mat \n");
	scanf("%d",&s);
	printf("Enter the elements: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the row for 2nd mat \n");
	scanf("%d",&m);
	printf("Enter the column for 2nd mat \n");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(m==r)
	{
		for(i=0;i<m;i++)
		{
		printf("\n");
		for(j=0;j<n;j++)
		{
		c[i][j]=0;
		for(k=0;k<m;k++)
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
		}
		
		printf("\n Multiplication of two matrix is");
		for(i=0;i<m;i++)
		{
		printf("\n");
		for(j=0;j<n;j++)
		printf("\t%d",c[i][j]);
		}

	}
	else
	{
		printf("Matrix cannot be multiplied! ");
	}
	
	
}
