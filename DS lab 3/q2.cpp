#include <stdio.h>

 int logicaland (int x, int y)
{
  
return x && y;

}


 
int logicalor (int x, int y)
{
  
return x || y;

}


 
int cond (int x, int y)
{
  
return (y || !x) ? 1 : 0;

}


 
int bicond (int x, int y)
{
  
return (x == y) ? 1 : 0;

}


 
int main ()
{
  printf("The statement is:\n");
  printf("If you are a hound dog(p), then you howl at the moon.\n");
  printf("You don't howl at the moon.(q)\n");
  printf("Therefore, you aren't a hound dog.\n\n");
  
int p[4] = { 1, 1, 0, 0 };
  
int q[4] = { 1, 0, 1, 0 };
  
int x1, x, y;
  
int c = 0;
  
 printf("Truthtable:\n\n");
printf ("p\tq\t!p\t!q\tp->q\t(p->q)^!q\t(p->q)^!q -> !p\n");
  
 
for (int i = 0; i < 4; i++)
    {
      
x1 = cond (p[i], q[i]);
      
x = logicaland (x1, !q[i]);
      
y = cond (x, !p[i]);
      
 
printf ("%d\t%d\t%d\t%d\t%d\t\t%d\t\t%d\n", p[i], q[i], !p[i], !q[i], x1,
		 x, y);
      
 
if (y == 0)
	{
	  
c++;
	
}
    
}
  
 
if (c == 0)
    {
      
printf ("\nStatement is valid.\n");
    
}
  else
    {
      
printf ("\nStatement is not valid.\n");
    
}
  
 
return 0;

}
