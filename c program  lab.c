#include<stdio.h>
int main()
{
	int a = 10,b=2,c,g,h,i,l;
	c=a+b,
	g=a-b,
	h=a*b,
	i=a/b,
	l=a%b;
	printf("sum of %d and %d is %d\n",a,b,c);
	printf("Diffrence between %d and %d is %d \n",a, b, g);
   printf("product of %d and %d is %d \n",a, b, h);
   printf("quotient when %d and %d is %d \n",a, b, i);
   printf("remender when %d and %d is %d \n",a, b, l);
   printf("sum of all arithmetic operation is %d",(a+b)+(a-b)+(a*b)+(a/b)+(a%b) );
}
