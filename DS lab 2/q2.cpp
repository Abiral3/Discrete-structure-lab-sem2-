#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5],i,j,m,n,p,q,s=0,product[5][5];
	printf("enter the size of first matrix:\n");
	printf("Row: ");
	scanf("%d",&m);
	printf("Column: ");
	scanf("%d",&n);
	printf("Enter the first boolean matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the size of second matrix:\n");
	printf("Row: ");
	scanf("%d",&p);
	printf("Column: ");
	scanf("%d",&q);
	printf("Enter the second boolean matrix:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=a[i][j]||b[i][j];
		}
		
	}
	
	printf("Join of Matrix A and B is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d  ",c[i][j]);
		}
		
		printf("\n");
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=a[i][j]&&b[i][j];
		}
		
	}
	
	printf("Boolean Product of Matrix A and B is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d  ",c[i][j]);
		}
		
		printf("\n");
	}
	
	if(m!=q)
	{
		printf("These two matrices cannot be multiplied.");
	}
	else
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				for(int k=0;k<p;k++)
				{
					s=s||a[i][k]&&b[k][i];
				}
				
				product[i][j]=s;
				s=0;	
			}
		}
		
	printf("Product of Matrix A and B is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d  ",product[i][j]);
		}
		
		printf("\n");
	}
}
	
	return 0;
	
}
