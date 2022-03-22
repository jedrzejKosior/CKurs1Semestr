#include<stdio.h>
#include<math.h>
double zespolone(double a, double b, double *p1, double *p2)
{
	double r1, arg;
	r1=sqrt(a*a+b*b); //modu³ z liczby zespolonej
	arg=acos(a/r1); // argument liczby zespolonej
	*p1=r1;
	*p2=arg;
}

int main(void)
{
	double a, b, modul, argument;
	double *p1=&modul, *p2=&argument;
	printf("Czesc rzeczywista ");
	scanf ("%lf", &a);
	printf("Czesc urojona ");
	scanf ("%lf", &b);
	zespolone(a, b, p1, p2);
	printf("%lf %lf", modul, argument);
	return 0;
}
