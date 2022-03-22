#include<stdio.h>
double dokwadratu(double x)
{
	return x*x;
}
int main (int argc, char** argv)
{
	double x=5.2;
	double y;
	y=dokwadratu(x);
	printf("%f", y);
	return 0;
}
