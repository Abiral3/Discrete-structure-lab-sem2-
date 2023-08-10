#include<stdio.h>
int gcd(int a , int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int main()
{
	int a,b,c;
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	c=gcd(a,b);
	printf("GCD of %d , %d = %d",a,b,c);
	return 0;
}
