#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int dodawaniewektorow(int a, int b)
{
	return a+b;
}
int main(void)
{
	int i=0, n=0;
	printf("PLease input lenght of vectors: ");
	scanf("%d", &n);
	int wektor1[n];
	int wektor2[n];
	int wektor3[n];
	srand(time(NULL));
	for(i=0; i<n;i++)
	{
		wektor1[i]=rand()%1000;
		wektor2[i]=rand()%1000;
	}
	for(i=0;i<n;i++)
	{
		wektor3[i]=dodawaniewektorow(wektor1[i], wektor2[i]);
	}
	printf("Wektor pierwszy: ");
	for(i=0;i<n;i++)
	{
		printf("%d ", wektor1[i]);
		if(i==n-1)
		{
			printf("\n");
		}
	}
	printf("Wektor drugi: ");
	for(i=0;i<n;i++)
	{
		printf("%d ", wektor2[i]);
		if(i==n-1)
		{
			printf("\n");
		}
	}
	printf("Suma tych wektorow: ");
	for(i=0;i<n;i++)
	{
		printf("%d ", wektor3[i]);
		if(i==n-1)
		{
			printf("\n");
		}
	}
	return 0;
}
