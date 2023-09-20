#include <stdio.h>

int main()
{
    int i, j, n, flag;

   
    printf("Enter a number to print Prime factors: ");
    scanf("%d", &n);

    printf("Prime Factors of %d are: \n", n);

    
    for(i=2; i<=n; i++)
    {
        
        if(n%i==0)
        {
           
            flag = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    flag = 0;
                    break;
                }
            }

         
            if(flag==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}
