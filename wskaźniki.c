#include<stdio.h>
int main(void)
{
	int a=5, b=7, x;
	int *p1=&a;
	int *p2=&b;
	x=*p1+*p2;
	printf("%d %d %d", x, *p1, *p2);
	return 0;
}
