#include<stdio.h>
/*
przechodzisz ca�� tablic� i zliczasz ilo�� element�w
nast�pnie wpisujesz do dw�ch tymczasowych, jedno ilo�� powt�rze�, druga co tak si� powtarza�o
przelatujesz ponownie p�tl� i n ilo�� razy i sprawdzasz czy nie ma wi�kszej ilo�ci innego elementu
*/
char rekord()
{
	int n=0, i=0, i2=0, hmax=0, hnow=0, niema=0;
	char best=' ';
	printf("Please input number of elements to check: ");
	scanf("%d", &n);
	char tab[n];
	for(i=0;i<=n;i++)
	{
		scanf("%c", &tab[i]);
	}
/*	for(i=1;i<=n;i++)
	{
		printf("%d", i);
		printf("%c ", tab[i]);
	}*/
	for(i=1;i<=n;i++)
	{
		if(tab[i]==best)
		{
			continue;
		}
		for(i2=1;i2<=n;i2++)
		{
			if(tab[i2]==tab[i])
			{
				hnow++;
			}
		}
		if (hnow>=hmax)
		{
			best=tab[i];
			hmax=hnow;
			niema++;
			if(niema==n){
				best=' ';
				return best;
				break;
			}
		}
		hnow=0;
	}
	return best;
}
int main(void)
{
	char odp=' ';
	if(odp==rekord())
	{
		printf("There is no such element!");
		return 0;
	}
	odp=rekord();
	printf("The most common sign is: %c", odp);
	return 0;	
}
