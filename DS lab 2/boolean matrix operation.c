#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k;
    int a[5][5],b[5][5], c[5][5];
    printf("Enter no. of rows: ");
    scanf("%d",&m);
    printf("Enter no. of col: ");
    scanf("%d",&n);

    printf("Enter elements of first matrix:\n");

    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
            printf("a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
       }
       
    }

       printf("Enter no. of rows: ");
    scanf("%d",&p);
    printf("Enter no. of col: ");
    scanf("%d",&q);

    printf("Enter elements of second matrix:\n");
    for ( i = 0; i < p; i++)
    {
       for ( j = 0; j < q; j++)
       {
            printf("a%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
       }
       
    }
   
   
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < q; j++)
       {
            c[i][j]=a[i][j]||b[i][j];
       }
       
    }


  printf("The boolean matrix join is:\n"); 
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < q; j++)
       {
           printf("%d ",c[i][j]);
       }
       printf("\n"); 
    }

return 0;
    
}
