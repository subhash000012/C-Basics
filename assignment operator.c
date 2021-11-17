#include<stdio.h>
int main()
{
	int x,y,z;
	x =10;
	y =4;
	z =3;
	x += y;
	y -= z;
	z += x;
	printf("%d %d %d",x,y,z);    
}
