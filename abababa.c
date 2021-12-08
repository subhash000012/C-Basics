#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter in four number");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	{
		printf("%d is largest number",a);
	}
	else if(b>c&&b>a&&b>d)
	{
		printf("%d is the largest number",b);
	}
	else if(c>a&&c>b&&c>d)
	{
		printf("%d is the largest number",c);
	}
	else if(d>a&&d>b&&d>c)
	{
		printf("%d is the largest number",d);
	}
}
