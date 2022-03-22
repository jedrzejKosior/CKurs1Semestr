#include<stdio.h>
#include<math.h>
struct algeb
{
	double rzecz;
	double uroj;
};

int main (void)
{
	int i=0;
	struct algeb zesp[5];
	for (i=0; i<5; i++)
	{
		printf ("Podaj czesc rzeczywista i urojona liczby\n");
		scanf ("%lf %lf", &zesp[i].rzecz, &zesp[i].uroj);
	}
	for (i=0; i<5; i++)
	{
		printf ("%0.2lf %0.2lf\n", zesp[i].rzecz, zesp[i].uroj);
	}
	i=0;
	double mod;
	double arg;
	mod=sqrt((zesp[i].rzecz)*(zesp[i].rzecz)+(zesp[i].uroj)*(zesp[i].uroj));
	arg=atan(zesp[i].uroj/zesp[i].rzecz);
	printf ("%d %d", mod, arg);
	return 0;
}
