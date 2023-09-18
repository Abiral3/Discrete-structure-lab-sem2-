#include<stdio.h>
int gcdex(int a , int b, int *x , int *y )
{
	if(a==0){
	*x=0;
	*y=1;	
	return b;
	}
	int c,d,gcd;
	gcd=gcdex(b%a,a,&c,&d);
	*x=d-(b/a)*c;
	*y=c;
	return gcd;
}
int main()
{
	int a,b,c,x,y;
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	c=gcdex(a,b,&x,&y);
	printf("GCD of %d , %d = %d \n",a,b,c);
	printf("The value of X and Y= %d , %d",x,y);
	return 0;
}
